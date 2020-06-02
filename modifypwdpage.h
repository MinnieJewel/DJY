#ifndef MODIFYPWDPAGE_H
#define MODIFYPWDPAGE_H
#include "mybase.h"
class NumberButtons;
class QButtonGroup;

namespace Ui {
    class ModifyPwdPage;
}

class ModifyPwdPage : public MyBase
{
    Q_OBJECT

public:
    explicit ModifyPwdPage(QWidget *parent = 0);
    ~ModifyPwdPage();
    NumberButtons* numberButtons;
    void showEvent(QShowEvent *);
    void clearAll();
    bool checkPwdValue();
private:
    Ui::ModifyPwdPage *ui;
    QButtonGroup* pwdButtonGroup;
    int clickButtonId;
    QString oldPassword,newPassword, cfPassword;
public slots:
    void onNumbersClick(int);
    void onPwdButtonClick(int);
};

#endif // MODIFYPWDPAGE_H
