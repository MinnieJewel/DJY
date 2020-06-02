#ifndef TRACTIONINFOPAGE_H
#define TRACTIONINFOPAGE_H

#include "mybase.h"
class QTableWidget;
namespace Ui {
    class TractionInfoPage;
}

class TractionInfoPage : public MyBase
{
    Q_OBJECT

public:
    explicit TractionInfoPage(QWidget *parent = 0);
    ~TractionInfoPage();
    void initialTableView(QTableWidget* table);
    void fillTableName(QTableWidget* table);
    void updatePage();
//    void openOroff(int row, int column, bool cut);
//    void normalOrNot(int row, int column, bool normal);
//    void curLimOn(int row, int column, bool curLim);
//    void slip(int row, int column, bool slip);
//    void slide(int row, int column, bool slip);
private:
    Ui::TractionInfoPage *ui;
    QTableWidget* tractionTable;


private slots:
    void on_btnBack_clicked();
};

#endif // TRACTIONINFOPAGE_H
