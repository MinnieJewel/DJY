#include "airconditionerpage.h"
#include "ui_airconditionerpage.h"
#include <QTableWidget>

#define _LOCAL 7, 50, 780, 200
#define _ROW 5
#define _COLUMN 5

AirConditionerPage::AirConditionerPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::AirConditionerPage)
{
    ui->setupUi(this);
    this->airConditionerTable = new QTableWidget(_ROW, _COLUMN, this);
    this->initialTableView(this->airConditionerTable);
    this->fillTableName(this->airConditionerTable);
}

AirConditionerPage::~AirConditionerPage()
{
    delete ui;
}

void AirConditionerPage::initialTableView(QTableWidget *table)
{
    if (NULL == table)
    {
        return;
    }

    table->setGeometry(_LOCAL);

    table->setStyleSheet(_TABLE);
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
    table->setColumnWidth(0, 140);
    table->setColumnWidth(1, 160);
    table->setColumnWidth(2, 160);
    table->setColumnWidth(3, 160);

    for (int row = 0; row < table->rowCount(); row ++)
    {
        for (int column = 0; column < table->columnCount(); column ++)
        {
            QTableWidgetItem *tableItem = new QTableWidgetItem("");
            //tableItem->setFlags(tableItem->flags() & ~Qt::ItemIsEnabled);
            tableItem->setFlags(Qt::ItemIsEditable);
            tableItem->setTextAlignment(Qt::AlignCenter);
            //tableItem->setBackgroundColor(Qt::white);
            //tableItem->setForeground(Qt::black);
            table->setItem(row, column, tableItem);
        }
    }
}

void AirConditionerPage::fillTableName(QTableWidget *table)
{
    if (NULL == table)
    {
        logger()->error("table is null;");
        return;
    }
    QList<QString> title;
    title << "显示项目" << "M1" << "C1" << "C2" << "M2";
    QList<QString> names;
    names << "客室空调正常" << "客室通风正常" << "司机室空调通风" << "司机室空调关闭";

    //fill the list to table
    if (_COLUMN == table->columnCount() && _ROW == table->rowCount())
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
            if (0 == column)
            {
                for (int row = 1; row < table->rowCount(); row ++)
                {
                    if (NULL == names[row-1])
                        return;
                    table->item(row, column)->setText(names[row-1]);
                }
            }
        }
    }
}

void AirConditionerPage::updatePage()
{}

void AirConditionerPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uRecondition);
    emit this->changeNavigatorPage(uNavigator);
}
