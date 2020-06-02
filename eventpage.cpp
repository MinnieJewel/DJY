#include "eventpage.h"
#include "ui_eventpage.h"
#include <QTableWidget>
#include <QButtonGroup>
#include "crrcfault.h"

#define _TABLEWITHBG ("gridline-color: black; font:16px,\"SimHei\";color:black; background-color:white;selection-background-color:rgb(255,209,128);")
#define _LOCAL 7, 7, 680, 300
#define _ROW 10
#define _ROWHISTORY 7
#define _COLUMN 6
#define _COLUMNHISTORY 7
#define _CURRENT_FAULT_MAX_ITEM 9
#define _HISTORY_FAULT_MAX_ITEM 6
enum btnId
{
    CURRENT = 0,
    HISTORY,
    LEVEL12,
    LEVEL3,
    TOTAL
};


EventPage::EventPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::EventPage)
{
    ui->setupUi(this);
    this->eventTable = new QTableWidget(_ROW, _COLUMN, this);
    this->initialTableView(eventTable);
    eventTable->setColumnWidth(0, 50);
    eventTable->setColumnWidth(1, 90);
    eventTable->setColumnWidth(2, 90);
    eventTable->setColumnWidth(3, 90);
    eventTable->setColumnWidth(4, 180);
    title1 << "序号" << "故障代码"<< "故障等级" << "系统" << "故障描述"<< "故障发生时间" ;

    this->fillTableName(eventTable,title1);

    this->historyFaultTable = new QTableWidget(_ROWHISTORY, _COLUMNHISTORY, this);
    this->initialTableView(historyFaultTable);
    historyFaultTable->setColumnWidth(0, 50);
    historyFaultTable->setColumnWidth(1, 70);
    historyFaultTable->setColumnWidth(2, 50);
    historyFaultTable->setColumnWidth(3, 70);
    historyFaultTable->setColumnWidth(4, 140);
    historyFaultTable->setColumnWidth(5, 140);
    title2 << "序号" << "代码"<< "等级" << "系统" << "描述"<< "发生时间" << "结束时间" ;
    this->fillTableName(historyFaultTable, title2);

    this->currentPage = 1;

    this->faultButtons = new QButtonGroup;
    this->faultButtons->addButton(ui->btnCurrentPage, CURRENT);
    this->faultButtons->addButton(ui->btnHistoryPage, HISTORY);

    this->levelButtons = new QButtonGroup;
    this->levelButtons->addButton(ui->btnLevel12, LEVEL12);
    this->levelButtons->addButton(ui->btnLevel3, LEVEL3);
    this->levelButtons->addButton(ui->btnTotal, TOTAL);

    this->currentBtnId = CURRENT;
    this->currentLevelId = TOTAL;
    connect(this->faultButtons, SIGNAL(buttonClicked(int)), this, SLOT(onButtonsClicked(int)));
    connect(this->levelButtons, SIGNAL(buttonClicked(int)), this, SLOT(onButtonsLevelClicked(int)));

    this->eventTable->show();
    this->historyFaultTable->hide();
    this->maxListSize = 0;
    ui->btnCurrentPage->setStyleSheet(NButtonDOWN);
    ui->btnTotal->setStyleSheet(NButtonDOWN);
}

EventPage::~EventPage()
{
    delete ui;
}

void EventPage::initialTableView(QTableWidget *table)
{
    if (NULL == table)
    {
        return;
    }

    table->setGeometry(_LOCAL);

    table->setStyleSheet(_TABLEWITHBG);
    table->setSelectionBehavior(QAbstractItemView::SelectRows);
    table->setSelectionMode(QAbstractItemView::SingleSelection);
    table->horizontalHeader()->setVisible(false);
    table->horizontalHeader()->setStretchLastSection(true);
    table->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    table->verticalHeader()->setVisible(false);
    table->verticalHeader()->setStretchLastSection(true);
    table->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    table->verticalHeader()->setResizeMode(QHeaderView::Stretch);
    //table->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table->setFocusPolicy(Qt::NoFocus);


    for (int row = 0; row < table->rowCount(); row ++)
    {
        for (int column = 0; column < table->columnCount(); column ++)
        {
            QTableWidgetItem *tableItem = new QTableWidgetItem("");
            //tableItem->setFlags(tableItem->flags() & ~Qt::ItemIsEnabled);
            //tableItem->setFlags(Qt::ItemIsEditable);
            tableItem->setTextAlignment(Qt::AlignCenter);
            //tableItem->setBackgroundColor(Qt::white);
            //tableItem->setForeground(Qt::black);
            table->setItem(row, column, tableItem);
        }
    }
}

void EventPage::fillTableName(QTableWidget *table, QList<QString> title)
{
    if (NULL == table)
    {
        logger()->error("table is null;");
        return;
    }

    //fill the list to table
    if ((_COLUMN == table->columnCount() ||_COLUMNHISTORY == table->columnCount()) && (_ROW == table->rowCount()|| _ROWHISTORY == table->rowCount()))
    {
        for (int column = 0; column < table->columnCount(); column ++)
        {
            if (NULL == title[column])
            {
                logger()->error("title is null;");
                return;
            }
            table->item(0, column)->setText(title[column]);
            table->item(0, column)->setBackgroundColor(QColor(191, 191, 191));
            table->item(0, column)->setFlags(table->item(0, column)->flags() & ~Qt::ItemIsEnabled);
        }
    }
}

void EventPage::GetcrrcFaultInfo(CrrcFault *crrcFault)
{
    m_crrcFault = crrcFault;
}

void EventPage::onButtonsClicked(int id)
{
    if (id == CURRENT)
    {
        this->eventTable->show();
        this->historyFaultTable->hide();
        clearTableContent(this->eventTable);
    }
    else if (id == HISTORY)
    {
        this->historyFaultTable->show();
        this->eventTable->show();
        clearTableContent(this->historyFaultTable);
    }
    for (int i = 0; i < this->faultButtons->buttons().size(); i++)
        faultButtons->button(i)->setStyleSheet(NButtonUP);
    faultButtons->button(id)->setStyleSheet(NButtonDOWN);
    this->currentBtnId = id;
    this->currentPage = 1;
}

void EventPage::onButtonsLevelClicked(int level)
{
    for (int i = 0; i < this->levelButtons->buttons().size(); i++)
    {
        levelButtons->button(i+LEVEL12)->setStyleSheet(NButtonUP);
    }
    levelButtons->button(level)->setStyleSheet(NButtonDOWN);
    this->currentLevelId = level;
    this->currentPage = 1;
    clearTableContent(this->eventTable);
    clearTableContent(this->historyFaultTable);
}

void EventPage::clearTableContent(QTableWidget *table)
{
    if (table == NULL)
    {
        logger()->error("table is null in clearTableContent; EventPage");
        return;
    }
    for (int row = 1; row < table->rowCount(); row++)
    {
        for (int column = 0; column < table->columnCount(); column++)
        {
            if (0 == table->item(row, column) || NULL == table->item(row, column))
            {
                    logger()->error("table is null in row", row);
                return;
            }
            else{
                table->item(row, column)->setText("");
            }
        }
    }
}

void EventPage::updatePage()
{
    /*//test to get currentRow
    int currentRow = eventTable->currentRow();
    eventTable->item(0, 0)->setText(QString::number(currentRow));*/
    // if click current fault button
    int maxIndex = 0;
    QList<QString> content;
    //record the details of all items in current page;
    QList<QString> details;
    if (CURRENT == this->currentBtnId)
    {        
        if (TOTAL == this->currentLevelId)
        {
            maxIndex = this->m_crrcFault->getCurrentFaultListSize() < this->currentPage * _CURRENT_FAULT_MAX_ITEM ?
                       this->m_crrcFault->getCurrentFaultListSize() : this->currentPage * _CURRENT_FAULT_MAX_ITEM;

            maxListSize = this->m_crrcFault->getCurrentFaultListSize();

            if ((this->currentPage - 1) * _CURRENT_FAULT_MAX_ITEM < maxListSize)
            {
                for (int i = (this->currentPage - 1) * _CURRENT_FAULT_MAX_ITEM ; i < maxIndex; i++)
                {
                    QList<QString> content;
                    content << QString::number(i+1) << this->m_crrcFault->getCurrentFaultCode(i) << this->m_crrcFault->getCurrentFaultLevel(i)
                            << this->m_crrcFault->getCurrentFaultPosition(i) << this->m_crrcFault->getCurrentFaultName(i)
                            << this->m_crrcFault->getCurrentFaultDate(i) + "\n" + this->m_crrcFault->getCurrentFaultTime(i);

                    details.append(this->m_crrcFault->getCurrentFaultDescription(i));
                    for (int column = 0; column < _COLUMN; column++)
                    {
                        this->eventTable->item(i % _CURRENT_FAULT_MAX_ITEM + 1, column)->setText(content.at(column));
                    }
                }
            }
            else if (maxListSize!=0)
            {
                logger()->error("EventPage:current page number:%1 exceed the max page number,please check it;",this->currentPage);
            }
        }
        else if (LEVEL12 == this->currentLevelId)
        {
            //search the current fault list of level 1/2
            this->m_crrcFault->getCurrentQueryFaultOfLevel12();

            maxListSize = this->m_crrcFault->getQueryFault().size();
            if ((this->currentPage - 1) *_CURRENT_FAULT_MAX_ITEM < maxListSize)
            {
                maxIndex = this->m_crrcFault->getQueryFault().size() < this->currentPage * _CURRENT_FAULT_MAX_ITEM ?
                               this->m_crrcFault->getQueryFault().size() : this->currentPage * _CURRENT_FAULT_MAX_ITEM;

                for (int i = (this->currentPage - 1)*_CURRENT_FAULT_MAX_ITEM; i < maxIndex; i++)
                {
                    QList<QString> content;
                    int tableIndex = this->m_crrcFault->getQueryFault()[i];
                    content <<QString::number(i+1) << this->m_crrcFault->getCurrentFaultCode(tableIndex) << this->m_crrcFault->getCurrentFaultLevel(tableIndex)
                            << this->m_crrcFault->getCurrentFaultPosition(tableIndex) << this->m_crrcFault->getCurrentFaultName(tableIndex)
                            << this->m_crrcFault->getCurrentFaultDate(tableIndex) + "\n" + this->m_crrcFault->getCurrentFaultTime(tableIndex);

                    details.append(this->m_crrcFault->getCurrentFaultDescription(tableIndex));
                    for (int column = 0; column < _COLUMN; column++)
                    {
                        this->eventTable->item(i % _CURRENT_FAULT_MAX_ITEM + 1, column)->setText(content.at(column));
                    }
                }
            }
            else if (maxListSize!=0)
            {
                logger()->error("EventPage:current page number:%1 exceed the max page number,please check it;", this->currentPage);
            }
        }
        else if (LEVEL3 == this->currentLevelId)
        {
            //search the current fault list of level3
            this->m_crrcFault->getCurrentQueryFaultOfLevel3();
            maxListSize = this->m_crrcFault->getQueryFault().size();
            if ((this->currentPage - 1) * _CURRENT_FAULT_MAX_ITEM < maxListSize)
            {
                maxIndex = this->m_crrcFault->getQueryFault().size() < this->currentPage * _CURRENT_FAULT_MAX_ITEM ?
                           this->m_crrcFault->getQueryFault().size() : this->currentPage * _CURRENT_FAULT_MAX_ITEM;

                for (int i = (this->currentPage - 1)*_CURRENT_FAULT_MAX_ITEM; i < maxIndex; i++)
                {                    
                    int tableIndex = this->m_crrcFault->getQueryFault()[i];
                    content <<QString::number(i+1) << this->m_crrcFault->getCurrentFaultCode(tableIndex) << this->m_crrcFault->getCurrentFaultLevel(tableIndex)
                            << this->m_crrcFault->getCurrentFaultPosition(tableIndex) << this->m_crrcFault->getCurrentFaultName(tableIndex)
                            << this->m_crrcFault->getCurrentFaultDate(tableIndex) + "\n" + this->m_crrcFault->getCurrentFaultTime(tableIndex);

                    details.append(this->m_crrcFault->getCurrentFaultDescription(tableIndex));

                    for (int column = 0; column < _COLUMN; column++)
                    {
                        this->eventTable->item(i % _CURRENT_FAULT_MAX_ITEM + 1, column)->setText(content.at(column));
                    }
                }
            }
            else if (maxListSize!=0)
            {
                logger()->error("EventPage:current page number:%1 exceed the max page number,please check it;", this->currentPage);
            }
        }
        //for the last page which the records don't full fill the table
        int tableContentSize = this->currentPage*_CURRENT_FAULT_MAX_ITEM;
        if (tableContentSize > maxListSize)
        {
            for (int lastPageSize = this->m_crrcFault->getCurrentFaultListSize();lastPageSize < tableContentSize; lastPageSize ++)
            {
                for (int columnLast = 0; columnLast < _COLUMN; columnLast++)
                {
                    this->eventTable->item(lastPageSize % _CURRENT_FAULT_MAX_ITEM + 1, columnLast)->setText("");
                }
            }
        }
        if (0 == maxListSize)
        {
            ui->labelPage->setText(QString::number(this->currentPage) + QString(" / ") + QString::number(1));
        }
        else if (0 == maxListSize % _CURRENT_FAULT_MAX_ITEM)
        {
            ui->labelPage->setText(QString::number(this->currentPage) + QString(" / ") + QString::number(maxListSize / _CURRENT_FAULT_MAX_ITEM));
        }
        else
        {
            ui->labelPage->setText(QString::number(this->currentPage) + QString(" / ") + QString::number(maxListSize / _CURRENT_FAULT_MAX_ITEM + 1));
        }

        if (eventTable->currentRow() > 0 && eventTable->currentRow() <= details.size() && !details.at(eventTable->currentRow() - 1).isNull())
        {
            ui->labelDetail->setText(details.at(eventTable->currentRow() - 1));
        }
//        else
//        {
//            logger()->error("eventTable is null in or currentRow is invalid ", eventTable->currentRow());
//        }
    }
    else if(HISTORY == this->currentBtnId)
    {
        if (TOTAL == this->currentLevelId)
        {
            maxIndex = this->m_crrcFault->getHistoryFaultListSize() < this->currentPage * _HISTORY_FAULT_MAX_ITEM ?
                       this->m_crrcFault->getHistoryFaultListSize() : this->currentPage * _HISTORY_FAULT_MAX_ITEM;

            maxListSize = this->m_crrcFault->getHistoryFaultListSize();

            if ((this->currentPage - 1) * _HISTORY_FAULT_MAX_ITEM < maxListSize)
            {
                for (int i = (this->currentPage - 1) * _HISTORY_FAULT_MAX_ITEM ; i < maxIndex; i++)
                {
                    QList<QString> content;
                    //int tableIndex = this->m_crrcFault->getHistoryFaultListSize();
                    content <<QString::number(i+1) << this->m_crrcFault->getHistoryFaultCode(i) << this->m_crrcFault->getHistoryFaultLevel(i)
                            << this->m_crrcFault->getHistoryFaultPosition(i) << this->m_crrcFault->getHistoryFaultName(i)
                            << this->m_crrcFault->getHistoryFaultStartDate(i) + "\n" + this->m_crrcFault->getHistoryFaultStartTime(i)
                            << this->m_crrcFault->getHistoryFaultEndDate(i) + "\n" + this->m_crrcFault->getHistoryFaultEndTime(i);

                    details.append(this->m_crrcFault->getHistoryFaultDescription(i));
                    for (int column = 0; column < _COLUMNHISTORY; column++)
                    {
                        this->historyFaultTable->item(i % _HISTORY_FAULT_MAX_ITEM + 1, column)->setText(content.at(column));
                    }
                }
            }
            else if (maxListSize!=0)
            {
                logger()->error("EventPage:current page number:%1 exceed the max page number,please check it;", this->currentPage);
            }
        }
        else if (LEVEL12 == this->currentLevelId)
        {
            //search the current fault list of level 1/2
            this->m_crrcFault->getHistoryQueryFaultOfLevel12();

            maxListSize = this->m_crrcFault->getQueryFault().size();
            if ((this->currentPage - 1) *_HISTORY_FAULT_MAX_ITEM < maxListSize)
            {
                maxIndex = this->m_crrcFault->getQueryFault().size() < this->currentPage * _HISTORY_FAULT_MAX_ITEM ?
                               this->m_crrcFault->getQueryFault().size() : this->currentPage * _HISTORY_FAULT_MAX_ITEM;

                for (int i = (this->currentPage - 1)*_HISTORY_FAULT_MAX_ITEM; i < maxIndex; i++)
                {
                    QList<QString> content;
                    int tableIndex = this->m_crrcFault->getQueryFault()[i];
                    content <<QString::number(i+1) << this->m_crrcFault->getHistoryFaultCode(tableIndex) << this->m_crrcFault->getHistoryFaultLevel(tableIndex)
                            << this->m_crrcFault->getHistoryFaultPosition(tableIndex) << this->m_crrcFault->getHistoryFaultName(tableIndex)
                            << this->m_crrcFault->getHistoryFaultStartDate(tableIndex) + "\n" + this->m_crrcFault->getHistoryFaultStartTime(tableIndex)
                            << this->m_crrcFault->getHistoryFaultEndDate(tableIndex) + "\n" + this->m_crrcFault->getHistoryFaultEndTime(tableIndex);

                    details.append(this->m_crrcFault->getHistoryFaultDescription(tableIndex));
                    for (int column = 0; column < _COLUMNHISTORY; column++)
                    {
                        this->historyFaultTable->item(i % _HISTORY_FAULT_MAX_ITEM + 1, column)->setText(content.at(column));
                    }
                }
            }
            else if (maxListSize!=0)
            {
                logger()->error("EventPage:current page number:%1 exceed the max page number,please check it;", this->currentPage);
            }
        }
        else if (LEVEL3 == this->currentLevelId)
        {
            //search the current fault list of level3
            this->m_crrcFault->getHistoryQueryFaultOfLevel3();
            maxListSize = this->m_crrcFault->getQueryFault().size();
            if ((this->currentPage - 1) * _HISTORY_FAULT_MAX_ITEM < maxListSize)
            {
                maxIndex = this->m_crrcFault->getQueryFault().size() < this->currentPage * _HISTORY_FAULT_MAX_ITEM ?
                           this->m_crrcFault->getQueryFault().size() : this->currentPage * _HISTORY_FAULT_MAX_ITEM;
                for (int i = (this->currentPage - 1)*_HISTORY_FAULT_MAX_ITEM; i < maxIndex; i++)
                {
                    QList<QString> content;
                    int tableIndex = this->m_crrcFault->getQueryFault()[i];
                    content <<QString::number(i+1) << this->m_crrcFault->getHistoryFaultCode(tableIndex) << this->m_crrcFault->getHistoryFaultLevel(tableIndex)
                            << this->m_crrcFault->getHistoryFaultPosition(tableIndex) << this->m_crrcFault->getHistoryFaultName(tableIndex)
                            << this->m_crrcFault->getHistoryFaultStartDate(tableIndex) + "\n" + this->m_crrcFault->getHistoryFaultStartTime(tableIndex)
                            << this->m_crrcFault->getHistoryFaultEndDate(tableIndex) + "\n" + this->m_crrcFault->getHistoryFaultEndTime(tableIndex);

                    details.append(this->m_crrcFault->getHistoryFaultDescription(tableIndex));
                    for (int column = 0; column < _COLUMNHISTORY; column++)
                    {
                        this->historyFaultTable->item(i % _HISTORY_FAULT_MAX_ITEM + 1, column)->setText(content.at(column));
                    }
                }
            }
            else if (maxListSize!=0)
            {
                logger()->error("EventPage:current page number:%1 exceed the max page number,please check it;", this->currentPage);
            }
        }

        if (historyFaultTable->currentRow() > 0 && historyFaultTable->currentRow() <= details.size() && !details.at(historyFaultTable->currentRow() - 1).isNull())
        {
            ui->labelDetail->setText(details.at(historyFaultTable->currentRow() - 1));
        }
//        else
//        {
//            logger()->error("historyFaultTable is null in or currentRow is invalid ", historyFaultTable->currentRow());
//        }
        //for the last page which the records don't full fill the table
        int tableContentSize = this->currentPage*_HISTORY_FAULT_MAX_ITEM;
        if (tableContentSize > maxListSize)
        {
            for (int lastPageSize = this->m_crrcFault->getCurrentFaultListSize();lastPageSize < tableContentSize; lastPageSize ++)
            {
                for (int columnLast = 0; columnLast < _COLUMN; columnLast++)
                {
                    this->historyFaultTable->item(lastPageSize % _HISTORY_FAULT_MAX_ITEM + 1, columnLast)->setText("");
                }
            }
        }
        if (0 == maxListSize)
        {
            ui->labelPage->setText(QString::number(this->currentPage) + QString(" / ") + QString::number(1));
        }
        else if (0 == maxListSize % _HISTORY_FAULT_MAX_ITEM)
        {
            ui->labelPage->setText(QString::number(this->currentPage) + QString(" / ") + QString::number(maxListSize / _HISTORY_FAULT_MAX_ITEM));
        }
        else
        {
            ui->labelPage->setText(QString::number(this->currentPage) + QString(" / ") + QString::number(maxListSize / _HISTORY_FAULT_MAX_ITEM + 1));
        }
    }
}

void EventPage::on_btnPre_clicked()
{
    if (this->currentPage > 1)
    {
        this->currentPage--;
    }
}


void EventPage::on_btnNext_clicked()
{
    if (maxListSize / _CURRENT_FAULT_MAX_ITEM > this->currentPage)
    {
        this->currentPage ++;
    }
    else if (maxListSize / _CURRENT_FAULT_MAX_ITEM == this->currentPage
             && maxListSize % _CURRENT_FAULT_MAX_ITEM != 0)
    {
        this->currentPage ++;
    }
}

void EventPage::showEvent(QShowEvent *)
{
    ui->labelDetail->setText("");
}
