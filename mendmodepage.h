#ifndef MENDMODEPAGE_H
#define MENDMODEPAGE_H

#include "mybase.h"

namespace Ui {
    class MendModePage;
}

class MendModePage : public MyBase
{
    Q_OBJECT

public:
    explicit MendModePage(QWidget *parent = 0);
    ~MendModePage();
    void showMendInfo(bool show);
private:
    Ui::MendModePage *ui;

private slots:
    void on_btnBack_clicked();
    void on_btnMendCancel_clicked();
    void on_btnMendOk_clicked();
    void on_btnMend_toggled(bool checked);
};

#endif // MENDMODEPAGE_H
