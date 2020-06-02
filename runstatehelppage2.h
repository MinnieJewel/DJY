#ifndef RUNSTATEHELPPAGE2_H
#define RUNSTATEHELPPAGE2_H

#include <QWidget>

namespace Ui {
    class RunstateHelpPage2;
}

class RunstateHelpPage2 : public QWidget
{
    Q_OBJECT

public:
    explicit RunstateHelpPage2(QWidget *parent = 0);
    ~RunstateHelpPage2();

private:
    Ui::RunstateHelpPage2 *ui;
};

#endif // RUNSTATEHELPPAGE2_H
