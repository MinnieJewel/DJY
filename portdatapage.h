#ifndef PORTDATAPAGE_H
#define PORTDATAPAGE_H

#include "mybase.h"

class QButtonGroup;
class QTableWidget;
namespace Ui {
    class PortDataPage;
}

class PortDataPage : public MyBase
{
    Q_OBJECT

public:
    explicit PortDataPage(QWidget *parent = 0);
    ~PortDataPage();
    void showPortData(int deviceNo);
    void showPortDataByPage();
    void getDataByPorts(QList<struct port *> ports);
    QList<int> hmiPort, ccu1Port, ccu2Port, ermPort, riomPort, edcuPort, acuPort, dcdcPort, hvacPort, tbcuPort;
    void installMvb(CrrcMvb* crrcMvb);

private:
    Ui::PortDataPage *ui;
    QButtonGroup *buttonGroup;
    QTableWidget *portDataTable;
    QList<int> selectPortList;
    void updatePage();
    void setTableContent();
    void setTableTitle();
    void cleanContent();
    CrrcMvb* crrcMvb;

private slots:
    void onBtnClick(int id);
};

#endif // PORTDATAPAGE_H
