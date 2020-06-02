#include "utilfunction.h"
#include <QLabel>

UtilFunction::UtilFunction()
{

}

void UtilFunction::showInfo(QLabel *label, bool state)
{
    if (state)
        label->show();
    else
        label->hide();
}
