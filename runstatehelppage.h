#ifndef RUNSTATEHELPPAGE_H
#define RUNSTATEHELPPAGE_H

#include "mybase.h"

namespace Ui {
    class RunstateHelpPage;
}

class RunstateHelpPage : public MyBase
{
    Q_OBJECT

public:
    explicit RunstateHelpPage(QWidget *parent = 0);
    ~RunstateHelpPage();

private:
    Ui::RunstateHelpPage *ui;
};

#endif // RUNSTATEHELPPAGE_H
