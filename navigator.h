#ifndef NAVIGATOR_H
#define NAVIGATOR_H

#include "mybase.h"

class QButtonGroup;
class ByPassPage;
namespace Ui {
    class Navigator;
}

class Navigator : public MyBase
{
    Q_OBJECT

public:
    explicit Navigator(QWidget *parent = 0);
    ~Navigator();
    void changeStyle(int);
    ByPassPage* bypassPage;
    void updatePage();
    void setHelpPage(int id);
private:
    Ui::Navigator *ui;
    QButtonGroup* navigatorGroup;

private slots:
    void on_btnHelp_clicked();
    void onBtnGroupClicked(int);
};

#endif // NAVIGATOR_H
