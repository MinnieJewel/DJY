#ifndef AIRCONDITIONERPAGE_H
#define AIRCONDITIONERPAGE_H

#include "mybase.h"
class QTableWidget;
namespace Ui {
    class AirConditionerPage;
}

class AirConditionerPage : public MyBase
{
    Q_OBJECT

public:
    explicit AirConditionerPage(QWidget *parent = 0);
    ~AirConditionerPage();
    void initialTableView(QTableWidget* table);
    void fillTableName(QTableWidget* table);
    void updatePage();
private:
    Ui::AirConditionerPage *ui;
    QTableWidget* airConditionerTable;

private slots:
    void on_btnBack_clicked();
};

#endif // AIRCONDITIONERPAGE_H
