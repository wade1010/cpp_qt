#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QObject::connect(ui->radioButtonBlack,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    QObject::connect(ui->radioButtonBlue,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    QObject::connect(ui->radioButtonRed,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_checkBoxUnderline_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);

}

void Dialog::on_checkBoxItalic_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}

void Dialog::on_checkBoxBold_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}

void Dialog::setTextFontColor()
{
   QPalette palette = ui->plainTextEdit->palette();

   if(ui->radioButtonRed->isChecked())
       palette.setColor(QPalette::Text,Qt::red);
   else if(ui->radioButtonBlue->isChecked())
       palette.setColor(QPalette::Text,Qt::blue);
   else
       palette.setColor(QPalette::Text,Qt::black);


   ui->plainTextEdit->setPalette(palette);
}
