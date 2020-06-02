#ifndef EVENTPAGE_H
#define EVENTPAGE_H

#include "mybase.h"

class QTableWidget;
class QButtonGroup;
class CrrcFault;
namespace Ui {
    class EventPage;
}

class EventPage : public MyBase
{
    Q_OBJECT

public:
    explicit EventPage(QWidget *parent = 0);
    ~EventPage();
    void initialTableView(QTableWidget* table);
    void fillTableName(QTableWidget* table, QList<QString> title);
    void updatePage();
    void GetcrrcFaultInfo(CrrcFault* crrcFault);
    void clearTableContent(QTableWidget* table);
    void showEvent(QShowEvent *);

private:
    Ui::EventPage *ui;
    QTableWidget* eventTable, *historyFaultTable;
    int currentPage, currentBtnId, currentLevelId,maxListSize;
    CrrcFault* m_crrcFault;
    QButtonGroup* faultButtons, *levelButtons;
    QList<QString> title1, title2;

private slots:
    void on_btnNext_clicked();
    void on_btnPre_clicked();
    void onButtonsClicked(int);
    void onButtonsLevelClicked(int);
};

#endif // EVENTPAGE_H
