#ifndef VERSIONINFOPAGE_H
#define VERSIONINFOPAGE_H

#include "mybase.h"
class QTableWidget;
namespace Ui {
    class VersionInfoPage;
}

class VersionInfoPage : public MyBase
{
    Q_OBJECT

public:
    explicit VersionInfoPage(QWidget *parent = 0);
    ~VersionInfoPage();
    void updatePage();
    void initialTableView(QTableWidget *table, bool isRiom, bool otherTable);
    void fillTableName(QTableWidget* table, bool riom, bool otherTable);
    void validStyle(QTableWidget *table,int row, int column, bool isValid);
    void showTables(bool show);
private:
    Ui::VersionInfoPage *ui;
    QTableWidget *versionTable1, *versionTable2, *riomVersionTable;
    bool showOther;//true:show other tables; false: show riom table;
    int page;
private slots:
    void on_btnNext_clicked();
    void on_btnPre_clicked();
    void on_btnBack_clicked();
};

#endif // VERSIONINFOPAGE_H
