#ifndef SETTRACTIONPAGE_H
#define SETTRACTIONPAGE_H

#include "mybase.h"
class QButtonGroup;
class QLabel;
class UtilFunction;
namespace Ui {
    class SetTractionPage;
}

class SetTractionPage : public MyBase
{
    Q_OBJECT

public:
    explicit SetTractionPage(QWidget *parent = 0);
    ~SetTractionPage();
    void initialButtons();
    //void onBtnClicked(int , bool);

    void updatePage();
private:
    Ui::SetTractionPage *ui;
    QButtonGroup* tractButtons;
    UtilFunction *util;
private slots:
    void on_btnLowPower_clicked();
    void on_btnBack_clicked();
    //void onBtnToggled(bool);
    void onBtnClicked(int);
};

#endif // SETTRACTIONPAGE_H
