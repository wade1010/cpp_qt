#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui { //命名空间
class Widget;  //ui_widget.h文件里定义的类，外部声明
}

class Widget : public QWidget
{
    Q_OBJECT  //宏，使用QT信号与槽机制必须添加

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui; //Ui::Widget类型的一个指针，指向可视化的界面
};

#endif // WIDGET_H
