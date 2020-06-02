#ifndef MYBASE_H
#define MYBASE_H

#include <QWidget>
#include "global.h"
#include "database.h"
#include "log4qt/logger.h"
class MyBase : public QWidget
{
    Q_OBJECT
    LOG4QT_DECLARE_QCLASS_LOGGER
public:
    explicit MyBase(QWidget *parent = 0);
    void setMyBase(enum pagePosition position, QString name, int helpPage = uInvalid);
    virtual void updatePage();

public:
    static int currentMiddlePage, currentHeaderPage, currentNavigatorPage, currentVehicleLogoPage;
    static Database* database;
    QString name;
    int helpPageNo;

public slots:
signals:
    void changeMiddlePage(int);
    void changeHeaderPage(int);
    void changeNavigatorPage(int);
    void changeLogoPage(int);
};

#endif // MYBASE_H
