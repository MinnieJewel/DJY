#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include "mybase.h"
class NumberButtons;
namespace Ui {
    class LoginPage;
}

class LoginPage : public MyBase
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = 0);
    ~LoginPage();
    NumberButtons* numberButtons;
    void showEvent(QShowEvent *);
    void setPassword(QString password);

public slots:
    void onNumbersClick(int);
private:
    Ui::LoginPage *ui;
    QString password, input;

private slots:
    void on_btnBack_clicked();
    void on_btnConfirm_clicked();
};

#endif // LOGINPAGE_H
