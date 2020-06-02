#ifndef FACTORYSETPAGE_H
#define FACTORYSETPAGE_H

#include "factorysetpage.h"
#include "mybase.h"

namespace Ui {
    class FactorySetPage;
}

class FactorySetPage : public MyBase
{
    Q_OBJECT

public:
    explicit FactorySetPage(QWidget *parent = 0);
    ~FactorySetPage();
    void showEvent(QShowEvent *);

private:
    Ui::FactorySetPage *ui;

private slots:
    void on_btn_Restart_clicked();
    void on_btnM2_clicked();
    void on_btnM1_clicked();
    void on_btnBack_clicked();
};

#endif // FACTORYSETPAGE_H
