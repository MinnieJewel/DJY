#include "runstatehelppage2.h"
#include "ui_runstatehelppage2.h"

RunstateHelpPage2::RunstateHelpPage2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RunstateHelpPage2)
{
    ui->setupUi(this);
}

RunstateHelpPage2::~RunstateHelpPage2()
{
    delete ui;
}
