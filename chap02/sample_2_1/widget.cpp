#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);//实现了组件的各种设置、信号与槽的关联
}

Widget::~Widget()
{
    delete ui;
}
