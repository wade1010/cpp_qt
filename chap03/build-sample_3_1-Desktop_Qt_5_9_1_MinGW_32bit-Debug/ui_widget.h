/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelBoy;
    QSpinBox *spinBoxBoy;
    QPushButton *btnBoyInc;
    QPushButton *btnMetaInfo;
    QLabel *labelGirl;
    QSpinBox *spinBoxGirl;
    QPushButton *btnGirlInc;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        Widget->setFont(font);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelBoy = new QLabel(Widget);
        labelBoy->setObjectName(QStringLiteral("labelBoy"));
        QFont font1;
        font1.setPointSize(14);
        labelBoy->setFont(font1);

        gridLayout->addWidget(labelBoy, 0, 0, 1, 1);

        spinBoxBoy = new QSpinBox(Widget);
        spinBoxBoy->setObjectName(QStringLiteral("spinBoxBoy"));
        spinBoxBoy->setValue(10);

        gridLayout->addWidget(spinBoxBoy, 0, 1, 1, 1);

        btnBoyInc = new QPushButton(Widget);
        btnBoyInc->setObjectName(QStringLiteral("btnBoyInc"));

        gridLayout->addWidget(btnBoyInc, 0, 2, 1, 1);

        btnMetaInfo = new QPushButton(Widget);
        btnMetaInfo->setObjectName(QStringLiteral("btnMetaInfo"));

        gridLayout->addWidget(btnMetaInfo, 0, 3, 1, 1);

        labelGirl = new QLabel(Widget);
        labelGirl->setObjectName(QStringLiteral("labelGirl"));
        labelGirl->setFont(font1);

        gridLayout->addWidget(labelGirl, 1, 0, 1, 1);

        spinBoxGirl = new QSpinBox(Widget);
        spinBoxGirl->setObjectName(QStringLiteral("spinBoxGirl"));
        spinBoxGirl->setValue(12);

        gridLayout->addWidget(spinBoxGirl, 1, 1, 1, 1);

        btnGirlInc = new QPushButton(Widget);
        btnGirlInc->setObjectName(QStringLiteral("btnGirlInc"));

        gridLayout->addWidget(btnGirlInc, 1, 2, 1, 1);

        btnClear = new QPushButton(Widget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        gridLayout->addWidget(btnClear, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 1, 0, 1, 1);


        retranslateUi(Widget);
        QObject::connect(btnClear, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        labelBoy->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\347\224\267\345\255\251\345\271\264\351\276\204", Q_NULLPTR));
        btnBoyInc->setText(QApplication::translate("Widget", "boy\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnMetaInfo->setText(QApplication::translate("Widget", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", Q_NULLPTR));
        labelGirl->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\345\245\263\345\255\251\345\271\264\351\276\204", Q_NULLPTR));
        btnGirlInc->setText(QApplication::translate("Widget", "girl\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnClear->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
