#include "widget.h"
#include "ui_widget.h"
#include <QMetaProperty>
#include <QMetaClassInfo>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->spinBoxBoy->setProperty("isBoy", true);
    ui->spinBoxGirl->setProperty("isBoy", false);

    boy = new QPerson("bob");
    boy->setProperty("age", 10);
    boy->setProperty("score", 89);
    boy->setProperty("sex", "Boy");
    connect(boy, &QPerson::ageChanged, this, &Widget::on_ageChanged);

    girl = new QPerson("coco");
    girl->setProperty("age", 12);
    girl->setProperty("score", 77);
    girl->setProperty("sex", "Girl");
    connect(girl, &QPerson::ageChanged, this, &Widget::on_ageChanged);

    connect(ui->spinBoxBoy, SIGNAL(valueChanged(int)), this, SLOT(on_spin_valueChanged(int)));

    connect(ui->spinBoxGirl, SIGNAL(valueChanged(int)), this, SLOT(on_spin_valueChanged(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_spin_valueChanged(int value)
{
    Q_UNUSED(value)
    QSpinBox *spinBox = qobject_cast<QSpinBox *>(sender());
    if (spinBox->property("isBoy").toBool()) {
        boy->setAge(spinBox->value());
    } else {
        girl->setAge(spinBox->value());
    }
}

void Widget::on_ageChanged(unsigned value)
{
    Q_UNUSED(value);//不用，但又不想看到警告
    QPerson *person = qobject_cast<QPerson *>(sender());
    QString name = person->property("name").toString();
    unsigned age = person->age();
    QString sex = person->property("sex").toString();
    ui->plainTextEdit->appendPlainText(name + "," + sex + "," + QString::asprintf("年龄:%d", age));

}

void Widget::on_btnBoyInc_clicked()
{
    boy->incAge();
//    ui->spinBoxBoy->setValue(boy->age());
}

void Widget::on_btnGirlInc_clicked()
{
    girl->incAge();
//    ui->spinBoxGirl->setValue(girl->age());
}

void Widget::on_btnMetaInfo_clicked()
{
    const QMetaObject *meta = girl->metaObject();
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("+++元对象信息+++\n");
    ui->plainTextEdit->appendPlainText(QString("类名称：%1\n").arg(meta->className()));
    ui->plainTextEdit->appendPlainText("property:");
    for (int i = meta->propertyOffset(); i < meta->propertyCount(); i++) {
        QMetaProperty prop = meta->property(i);
        const char *propName = prop.name();
        QString propValue = girl->property(propName).toString();

        ui->plainTextEdit->appendPlainText(QString("属性名称：%1，属性值：%2").arg(propName, propValue));
    }
    ui->plainTextEdit->appendPlainText("\n");
    ui->plainTextEdit->appendPlainText("classInfo:");
    for (int i = meta->classInfoOffset(); i < meta->classInfoCount(); i++) {
        QMetaClassInfo clsInfo =  meta->classInfo(i);

        ui->plainTextEdit->appendPlainText(QString("Name=%1,Value=%2").arg(clsInfo.name(), clsInfo.value()));
    }


}


