#ifndef SETAIRCONDITIONERHELP_H
#define SETAIRCONDITIONERHELP_H

#include "mybase.h"

namespace Ui {
    class SetAirconditionerHelp;
}

class SetAirconditionerHelp : public MyBase
{
    Q_OBJECT

public:
    explicit SetAirconditionerHelp(QWidget *parent = 0);
    ~SetAirconditionerHelp();

private:
    Ui::SetAirconditionerHelp *ui;

private slots:
    void on_btnBack_clicked();
};

#endif // SETAIRCONDITIONERHELP_H
