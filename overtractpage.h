#ifndef OVERTRACTPAGE_H
#define OVERTRACTPAGE_H

#include "mybase.h"
class QLabel;
class UtilFunction;
namespace Ui {
    class OverTractPage;
}

class OverTractPage : public MyBase
{
    Q_OBJECT

public:
    explicit OverTractPage(QWidget *parent = 0);
    ~OverTractPage();
    void updatePage();
private:
    Ui::OverTractPage *ui;
    UtilFunction *util;
private slots:
    void on_btnBack_clicked();
    void on_btnTractMode_toggled(bool checked);
};

#endif // OVERTRACTPAGE_H
