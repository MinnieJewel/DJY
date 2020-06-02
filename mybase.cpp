#include "mybase.h"

MyBase::MyBase(QWidget *parent) :
    QWidget(parent)
{
    if (NULL != parent)
    {
        this->connect(this, SIGNAL(changeMiddlePage(int)), parent, SLOT(changeMiddlePage(int)));
        this->connect(this, SIGNAL(changeHeaderPage(int)), parent, SLOT(changeHeaderPage(int)));
        this->connect(this, SIGNAL(changeNavigatorPage(int)), parent, SLOT(changeNavigatorPage(int)));
        this->connect(this, SIGNAL(changeLogoPage(int)), parent, SLOT(changeLogoPage(int)));
    }
}

int MyBase::currentMiddlePage = uRunStatePage;
int MyBase::currentHeaderPage = uHeader;
int MyBase::currentNavigatorPage = uNavigator;
int MyBase::currentVehicleLogoPage = uVehicleLogo;

Database* MyBase::database = NULL;

void MyBase::setMyBase(pagePosition position, QString name, int helpPage)
{
    if (uTop == position)
    {
        this->setGeometry(0, 0, this->width(), this->height());
    }
    else if (uMiddle == position)
    {
        this->setGeometry(0, 80, this->width(), this->height());
    }
    else if (uWithVehicleMiddle == position)
    {
        this->setGeometry(0, 180, this->width(), this->height());
    }
    else if (uBottom == position)
    {
        this->setGeometry(0, 530, this->width(), this->height());
    }

    else if (uHuge == position)
    {
        this->setGeometry(0, 0, this->width(), this->height());
    }


//    else if (uLargeMiddle == position)
//    {
//        this->setGeometry(0, 82, this->width(), this->height());
//    }

    this->name = name;
    this->hide();
    this->helpPageNo = helpPage;
}

void MyBase::updatePage(){}
