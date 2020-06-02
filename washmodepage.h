#ifndef WASHMODEPAGE_H
#define WASHMODEPAGE_H

#include "mybase.h"
class UtilFunction;
namespace Ui {
    class WashModePage;
}

class WashModePage : public MyBase
{
    Q_OBJECT

public:
    explicit WashModePage(QWidget *parent = 0);
    ~WashModePage();
    void updatePage();

private:
    Ui::WashModePage *ui;
    UtilFunction *util;
private slots:
    void on_btnBack_clicked();
    void on_btnWash_toggled(bool checked);
};

#endif // WASHMODEPAGE_H
