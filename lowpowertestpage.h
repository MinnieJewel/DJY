#ifndef LOWPOWERTESTPAGE_H
#define LOWPOWERTESTPAGE_H

#include "mybase.h"

class QTableWidget;
class QPushButton;
class QLabel;
class UtilFunction;
namespace Ui {
    class LowPowerTestPage;
}

class LowPowerTestPage : public MyBase
{
    Q_OBJECT

public:
    explicit LowPowerTestPage(QWidget *parent = 0);
    ~LowPowerTestPage();
    void initialTableView(QTableWidget* table);
    void fillTableName(QTableWidget* table);
    void updatePage();
    void initialTestButton(QPushButton* button);
private:
    Ui::LowPowerTestPage *ui;
    QTableWidget* lowPowerTable;
    UtilFunction* util;
private slots:
    void on_btnTest2_toggled(bool checked);
    void on_btnTest1_toggled(bool checked);
    void on_btnBack_clicked();
};

#endif // LOWPOWERTESTPAGE_H
