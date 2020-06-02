#include "runstatehelppage.h"
#include "ui_runstatehelppage.h"

#include "mybase.h"
RunstateHelpPage::RunstateHelpPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::RunstateHelpPage)
{
    ui->setupUi(this);
}

RunstateHelpPage::~RunstateHelpPage()
{
    delete ui;
}
