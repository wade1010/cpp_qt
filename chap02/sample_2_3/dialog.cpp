#include "dialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

void Dialog::initUI()
{
    checkBoxUnderline = new QCheckBox(tr("Underline"));
    checkBoxItalic = new QCheckBox(tr("Italic"));
    checkBoxBold = new QCheckBox(tr("Bold"));
    QHBoxLayout *hLayout1 = new QHBoxLayout;
    hLayout1->addWidget(checkBoxUnderline);
    hLayout1->addWidget(checkBoxBold);
    hLayout1->addWidget(checkBoxItalic);

    rBtnBlack = new QRadioButton("Black");
    rBtnBlue = new QRadioButton("Blue");
    rBtnRed = new QRadioButton("Red");
    QHBoxLayout *hLayout2 = new QHBoxLayout;
    hLayout2->addWidget(rBtnBlack);
    hLayout2->addWidget(rBtnBlue);
    hLayout2->addWidget(rBtnRed);

    plainTextEdit = new QPlainTextEdit();
    QFont font = plainTextEdit->font();
    font.setPixelSize(20);
    plainTextEdit->setFont(font);
    plainTextEdit->setPlainText("Hello World\n\nThis is Bob");


    pushBtnOK = new QPushButton("OK");
    pushBtnCancel = new QPushButton("Cancel");
    pushBtnClose = new QPushButton("Close");
    QHBoxLayout *hLayout3 = new QHBoxLayout;
    hLayout3->addStretch();
    hLayout3->addWidget(pushBtnOK);
    hLayout3->addWidget(pushBtnCancel);
    hLayout3->addStretch();
    hLayout3->addWidget(pushBtnClose);


    QVBoxLayout *vLayout1 = new QVBoxLayout;
    vLayout1->addLayout(hLayout1);
    vLayout1->addLayout(hLayout2);
    vLayout1->addWidget(plainTextEdit);
    vLayout1->addLayout(hLayout3);
    setLayout(vLayout1);
}

void Dialog::initSignalSlot()
{
    connect(pushBtnOK, SIGNAL(clicked()), this, SLOT(accept()));
    connect(pushBtnClose, SIGNAL(clicked()), this, SLOT(close()));
    connect(pushBtnCancel, SIGNAL(clicked()), this, SLOT(reject()));

    connect(checkBoxUnderline, SIGNAL(clicked(bool)), this, SLOT(on_checkUnderline(bool)));
    connect(checkBoxItalic, SIGNAL(clicked(bool)), this, SLOT(on_checkItalic(bool)));
    connect(checkBoxBold, SIGNAL(clicked(bool)), this, SLOT(on_checkBold(bool)));

    connect(rBtnBlue, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(rBtnRed, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(rBtnBlack, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
}

void Dialog::on_checkUnderline(bool checked)
{
    QFont font =  plainTextEdit->font();
    font.setUnderline(checked);
    plainTextEdit->setFont(font);
}

void Dialog::on_checkItalic(bool checked)
{
    QFont font = plainTextEdit->font();
    font.setItalic(checked);
    plainTextEdit->setFont(font);
}

void Dialog::on_checkBold(bool checked)
{
    QFont font = plainTextEdit->font();
    font.setBold(checked);
    plainTextEdit->setFont(font);
}

void Dialog::setTextFontColor()
{
    QPalette p = plainTextEdit->palette();
    p.setColor(QPalette::Text, Qt::black);
    if (rBtnBlue->isChecked()) {
        p.setColor(QPalette::Text, Qt::blue);
    } else if (rBtnRed->isChecked()) {
        p.setColor(QPalette::Text, Qt::red);
    }
    plainTextEdit->setPalette(p);
}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    initUI();
    initSignalSlot();
}

Dialog::~Dialog()
{
    delete checkBoxUnderline;
    delete checkBoxItalic;
    delete checkBoxBold;
    delete rBtnBlack;
    delete rBtnRed;
    delete rBtnBlue;
    delete plainTextEdit;
    delete pushBtnOK;
    delete pushBtnCancel;
    delete pushBtnClose;

}
