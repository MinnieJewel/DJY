#ifndef SENTSANDPAGE_H
#define SENTSANDPAGE_H

#include "mybase.h"

class QTableWidget;
class QPushButton;
class QLabel;
class UtilFunction;
namespace Ui {
    class SentSandPage;
}

class SentSandPage : public MyBase
{
    Q_OBJECT

public:
    explicit SentSandPage(QWidget *parent = 0);
    ~SentSandPage();
    void initialTableView(QTableWidget* table);
    void fillTableName(QTableWidget* table, QList<QString> title, QList<QString> names, int row);
    void updatePage();
    void initialButtons(QPushButton* button);
    QString startOrNot(bool start);
private:
    Ui::SentSandPage *ui;
    QTableWidget *sandTable, *localTable;
    UtilFunction *util;

private slots:
    void on_btnReset_toggled(bool checked);
    void on_btnHeat_toggled(bool checked);
    void on_btnTest_toggled(bool checked);
    void on_btnBack_clicked();
};

#endif // SENTSANDPAGE_H
