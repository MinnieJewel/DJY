#include "portdatapage.h"
#include "ui_portdatapage.h"
#include <QButtonGroup>
#include <QTableWidget>
#include "crrcmvb.h"

#define _ROWS ("color: black; background-color: rgb(222, 234, 246); alternate-background-color: rgb(189, 214, 238);")
#define BTN_UNSELECTED ("outline:none; border:3px solid white; color: white; background-color: rgb(51,153,255);")
#define BTN_SELECTED ("outline:none; border:3px solid white; color: black; background-color: white;")
#define ROWS 25
#define COLUMN 18
#define TABLEWIDTH 730
#define TABLEHEIGHT 570

enum btnNo
{
   hmi = 0,
   ccu1,
   ccu2,
   erm,
   riom,
   edcu,
   acu,
   dcdc,
   hvac,
   tbcu,
   uBack
};

PortDataPage::PortDataPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::PortDataPage)
{
    ui->setupUi(this);
    this->buttonGroup = new QButtonGroup;
    this->buttonGroup->addButton(ui->btnHmi, hmi);
    this->buttonGroup->addButton(ui->btnCcu1, ccu1);
    this->buttonGroup->addButton(ui->btnCcu2, ccu2);
    this->buttonGroup->addButton(ui->btnErm, erm);
    this->buttonGroup->addButton(ui->btnRiom, riom);
    this->buttonGroup->addButton(ui->btnEdcu, edcu);
    this->buttonGroup->addButton(ui->btnAcu, acu);
    this->buttonGroup->addButton(ui->btnDcdc, dcdc);
    this->buttonGroup->addButton(ui->btnHvac, hvac);
    this->buttonGroup->addButton(ui->btnTbcu, tbcu);
    this->buttonGroup->addButton(ui->btnBack, uBack);
    this->buttonGroup->setExclusive(true);
    connect(this->buttonGroup, SIGNAL(buttonClicked(int)), this, SLOT(onBtnClick(int)));
    this->hmiPort <<0x400 << 0x401 << 0x402 <<0x410 << 0x411 << 0x412 ;
    this->ccu1Port
            <<0x100<<0x101<<0x103<<0x104//to all
            <<0x218<<0x228<<0x238<<0x248<<0x258<<0x268//to riom
            <<0x308<<0x309<<0xD08//to erm
            <<0x408<<0x409<<0x40A<<0x40B<<0x40C<<0x40D<<0x40E<<0x40F//to hmi
            <<0x708//to edcu
            <<0x908<<0x909;//to hvac

    this->ccu2Port
            <<0x140<<0x141<<0x144<<0x145//to tbcu
            <<0xA08//to dcdc
            <<0x608;//to acu
    this->ermPort << 0x300<< 0xD00 << 0xD11 << 0xD21;
    this->riomPort <<0x210<<0x220<<0x230<<0x240<<0x250<<0x260<<0x211<<0x221<<0x231<<0x241<<0x251<<0x261
            <<0x212<<0x222<<0x252<<0x262<<0x227<<0x257;
    this->tbcuPort << 0x500<< 0x510<< 0x501<< 0x511<< 0x502<< 0x512<< 0x503<< 0x513<< 0x504<< 0x514;
    this->dcdcPort << 0xA10<< 0xA20<< 0xA11<< 0xA21<< 0xA12<< 0xA22;
    this->edcuPort << 0x700<< 0x704<< 0x710<< 0x714<< 0x720<< 0x724 <<0x730<< 0x734<< 0x740<< 0x744 <<0x750<< 0x754
            << 0x760<< 0x764<< 0x770<< 0x774<< 0x780<< 0x784<< 0x790<< 0x794<< 0x7A0<< 0x7A4;
    this->hvacPort << 0x900<< 0x910<< 0x901<< 0x911<< 0x904<< 0x914<< 0x905<< 0x915;
    this->acuPort << 0x600<< 0x604<< 0x601<< 0x605<< 0x602<< 0x606<< 0x603<< 0x607;

    this->selectPortList = this->hmiPort;
    this->portDataTable = new QTableWidget(ROWS, COLUMN, this);
    this->portDataTable->setGeometry(0, 15, TABLEWIDTH, TABLEHEIGHT);
    this->portDataTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    this->portDataTable->horizontalHeader()->setStretchLastSection(true);

    this->portDataTable->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    this->portDataTable->verticalHeader()->setStretchLastSection(true);
    this->portDataTable->verticalHeader()->setResizeMode(QHeaderView::Stretch);
    this->portDataTable->horizontalHeader()->hide();
    this->portDataTable->verticalHeader()->hide();
    this->portDataTable->setAlternatingRowColors(true);
    this->portDataTable->setStyleSheet(_ROWS);

    QFont font;
    font.setFamily("SimHei");
    font.setPixelSize(12);
    this->portDataTable->setFont(font);
    this->setTableTitle();
    this->setTableContent();
    this->portDataTable->show();
}

PortDataPage::~PortDataPage()
{
    delete ui;
}

void PortDataPage::setTableTitle()
{
    if (NULL == this->portDataTable)
    {
        logger()->error("portDataTable is null in setTableTitle");
        return;
    }

    for (int i = 0; i < COLUMN; i++)
    {
        QString text;
        if (i == 0)
        {
            text = "port";
        }
        else if (i == 17)
        {
            text = "cycle";
        }
        else
        {
            text.sprintf("%02d %02d", (i - 1) * 2, (i - 1) * 2 + 1);
        }
        QTableWidgetItem *tableItem = new QTableWidgetItem("");
        tableItem->setText(text);
        tableItem->setBackgroundColor(QColor(91, 155, 213));
        tableItem->setTextColor("white");
        this->portDataTable->setItem(0, i, tableItem);
    }
}

void PortDataPage::setTableContent()
{
    if (NULL == this->portDataTable)
    {
        logger()->error("portDataTable is null in initialTable;");
        return;
    }
    else
    {
        for (int row = 1; row < ROWS; row ++)
        {
            for (int column = 0; column < COLUMN; column ++)
            {
                QTableWidgetItem *tableItem = new QTableWidgetItem("");
                tableItem->setText("");
                this->portDataTable->setItem(row, column, tableItem);
            }
        }
    }
}

void PortDataPage::cleanContent()
{
    if (NULL == this->portDataTable)
    {
        logger()->error("portDataTable is null in cleanContent.");
        return;
    }

    for (int row = 1; row < ROWS; row ++)
    {
        for (int column = 0; column < COLUMN; column ++)
        {
            if (row > 0 && (row % 2 == 0))
                this->portDataTable->item(row, column)->setBackgroundColor(QColor(222, 234, 246));//
            else if (row > 0 && (row % 2 == 1))
                this->portDataTable->item(row, column)->setBackgroundColor(QColor(189, 214, 238));//

            this->portDataTable->item(row, column)->setTextColor(Qt::black);
            this->portDataTable->item(row, column)->setText("");
        }
    }
}

void PortDataPage::installMvb(CrrcMvb *crrcMvb)
{
    this->crrcMvb = crrcMvb;
}

void PortDataPage::onBtnClick(int id)
{
    for (int i = 0; i < this->buttonGroup->buttons().size(); i ++)
    {
        buttonGroup->button(i)->setStyleSheet(BTN_UNSELECTED);
    }
    buttonGroup->button(id)->setStyleSheet(BTN_SELECTED);

    this->cleanContent();

    switch (id)
    {
    case hmi:
        this->selectPortList = this->hmiPort;
        break;
    case ccu1:
        this->selectPortList = this->ccu1Port;
        break;
    case ccu2:
        this->selectPortList = this->ccu2Port;
        break;
    case erm:
        this->selectPortList = this->ermPort;
        break;
    case riom:
        this->selectPortList = this->riomPort;
        break;
    case edcu:
        this->selectPortList = this->edcuPort;
        break;
    case acu:
        this->selectPortList = this->acuPort;
        break;
    case dcdc:
        this->selectPortList = this->dcdcPort;
        break;
    case hvac:
        this->selectPortList = this->hvacPort;
        break;
    case tbcu:
        this->selectPortList = this->tbcuPort;
        break;

    case uBack:
        emit this->changeHeaderPage(uHeader);
        emit this->changeMiddlePage(uRecondition);
        emit this->changeLogoPage(uInvalid);
        emit this->changeNavigatorPage(uNavigator);
        break;

    default:
        logger()->info("check the wrong button: DataMonitor::onBtnClick(int id);");
        break;
    }
}

void PortDataPage::updatePage()
{
    if (this->selectPortList.isEmpty())
    {
        logger()->error("selectPort is empty: DataMonitor::updatePage();");
        return;
    }
    else if (this->selectPortList.size() > ROWS)
    {
        logger()->error("port size exceed table : DataMonitor::updatePage();");
        return;
    }
    for (int row = 1; row <= this->selectPortList.size(); row ++)
    {
        for (int column = 0; column < COLUMN; column ++)
        {
            QString textContent;
            if (column == 0)
            {
                textContent.sprintf("%03x", this->selectPortList.at(row - 1));
            }
            else if (column == COLUMN - 1)
            {
                textContent.sprintf("%d", this->crrcMvb->getPortCycle(this->selectPortList.at(row - 1)));
                if (this->crrcMvb->isPortTimeout(this->selectPortList.at(row - 1)))
                {
                    this->portDataTable->item(row, column)->setBackgroundColor(Qt::red);
                }
                else
                {
                    if (row > 0 && (row % 2 == 0))
                        this->portDataTable->item(row, column)->setBackgroundColor(QColor(222, 234, 246));
                    else if (row > 0 && (row % 2 == 1))
                        this->portDataTable->item(row, column)->setBackgroundColor(QColor(189, 214, 238));

                    this->portDataTable->item(row, column)->setTextColor(Qt::black);
                }
            }
            else
            {
                textContent.sprintf("%02x %02x", this->crrcMvb->getUnsignedChar(this->selectPortList.at(row - 1), (column-1) * 2), this->crrcMvb->getUnsignedChar(this->selectPortList.at(row - 1), (column-1) * 2+1));
            }
            this->portDataTable->item(row, column)->setText(textContent);
        }
    }
}
