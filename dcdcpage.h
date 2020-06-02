#ifndef DCDCPAGE_H
#define DCDCPAGE_H

#include "mybase.h"
class QTableWidget;
class QTimer;
namespace Ui {
    class DCDCPage;
}

class DCDCPage : public MyBase
{
    Q_OBJECT

public:
    explicit DCDCPage(QWidget *parent = 0);
    ~DCDCPage();
    void initialTableView(QTableWidget* table);
    void fillTableName(QTableWidget* table);
    void updatePage();
private:
    Ui::DCDCPage *ui;
    QTableWidget* dcdcTable;
    QTimer *timer1, *timer2;

private slots:
    void on_btnDcdcCut2_toggled(bool checked);
    void on_btnDcdcCut1_toggled(bool checked);
    void on_btnDcdcReset2_clicked();
    void on_btnDcdcReset1_clicked();
    void on_btnBack_clicked();
    void onTimer1Out();
    void onTimer2Out();
};

#endif // DCDCPAGE_H
