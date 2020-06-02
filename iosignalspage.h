#ifndef IOSIGNALSPAGE_H
#define IOSIGNALSPAGE_H

#include "mybase.h"

class QTableWidget;
class QLabel;
class QButtonGroup;

namespace Ui {
    class IOSignalsPage;
}

class IOSignalsPage : public MyBase
{
    Q_OBJECT    
public:
    explicit IOSignalsPage(QWidget *parent = 0);
    ~IOSignalsPage();
    void initialView();
    void initialTableView(QTableWidget *table);
    void hideAllTable();
    void cleanContent(QTableWidget* table);
    void setIONavigatorStyle(bool enablePre, bool enableNext, int totalPage, int page);
    void updateButtons(int currentVehicle);
    void updatePage();
    void updateDio(QTableWidget* table, QList<bool> &state);
    void updateAx(QTableWidget* table, QList<QString> &state);
    bool ifValid(QTableWidget *table, QList<QString> channelNoList, QList<QString> channelNameList);
    void setTableView(QTableWidget* table, QList<QString> channelNoList, QList<QString> channelNameList);
    void setAxTableView(QTableWidget* table, QList<QString> channelNoList, QList<QString> axListName);

private:
    Ui::IOSignalsPage *ui;
    QTableWidget* riomDI1InfoTable;
    QTableWidget* riomDI2InfoTable;
    QTableWidget* riomDO1InfoTable;
    QTableWidget *riomDO2InfoTable;
    QTableWidget *riomAXInfoTable;

    QTableWidget *ERMDITable;
    QTableWidget *ERMDOTable;
    QTableWidget *ERMAIOTable;
    QTableWidget *PWMTable;


    int currentVehicle, page, totalPage;
    QList<QString> listDI, listDO, listAX,ermDI,ermDO,ermAIO,ermPWM,
    r1di1List, r1di2List, r2di1List, r5di1List,
    r2di2List, r5di2List, r3diList, r4diList,
    r6di1List, r6di2List,
    r1do1List, r1do2List, r2do1List, r2do2List,
    r5do1List, r5do2List, r6do1List, r6do2List,
    r3doList, r4doList,ax1List, ax2List,
    ermdiList, ermdoList, ermaxList, ermPwmList;

    QButtonGroup* riomButtons;

private slots:
    void on_btnNextPage_clicked();
    void on_btnPrePage_clicked();
    void onRiomBtnClicked(int);

};

#endif // IOSIGNALSPAGE_H
