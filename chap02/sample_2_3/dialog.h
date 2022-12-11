#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDial>
#include <QCheckBox>
#include <QPushButton>
#include <QRadioButton>
#include <QPlainTextEdit>

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QCheckBox *checkBoxUnderline;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;

    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;

    QPlainTextEdit *plainTextEdit;

    QPushButton *pushBtnOK;
    QPushButton *pushBtnCancel;
    QPushButton *pushBtnClose;

    void initUI();
    void initSignalSlot();

private slots:
    void on_checkUnderline(bool checked);
    void on_checkItalic(bool checked);
    void on_checkBold(bool checked);

    void setTextFontColor();

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
};

#endif // DIALOG_H
