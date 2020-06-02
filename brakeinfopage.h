#ifndef BRAKEINFOPAGE_H
#define BRAKEINFOPAGE_H

#include "mybase.h"
class QTableWidget;

namespace Ui {
    class BrakeInfoPage;
}
class BrakeInfoPage : public MyBase
{
    Q_OBJECT

public:
    explicit BrakeInfoPage(QWidget *parent = 0);
    ~BrakeInfoPage();
    void initialTableView(QTableWidget* table);
    void fillTableName(QTableWidget* table);
    void updatePage();
//    QString brakeMode(int);
//    QString faultOrNot(bool fault);
private:
    Ui::BrakeInfoPage *ui;
    QTableWidget* brakeTable;

private slots:
    void on_btnBack_clicked();
};

#endif // BRAKEINFOPAGE_H
