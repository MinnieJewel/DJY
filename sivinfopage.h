#ifndef SIVINFOPAGE_H
#define SIVINFOPAGE_H

#include "mybase.h"
class QTableWidget;

namespace Ui {
    class SIVInfoPage;
}

class SIVInfoPage : public MyBase
{
    Q_OBJECT

public:
    explicit SIVInfoPage(QWidget *parent = 0);
    ~SIVInfoPage();
    void initialTableView(QTableWidget* table);
    //void fillTableName(QTableWidget* table);
    void updatePage();
    void initialTitle();
    void showEvent(QShowEvent *);
    void turnPage();
//    QString normalOrNot(bool normal);
//    QString faultOrNot(bool fault);
//    QString workOrNot(bool work);
private:
    Ui::SIVInfoPage *ui;
    QTableWidget *sivRiomTable, *sivTable;
    int page;

private slots:
    void on_btnNext_clicked();
    void on_btnPre_clicked();
    void on_btnBack_clicked();
};

#endif // SIVINFOPAGE_H
