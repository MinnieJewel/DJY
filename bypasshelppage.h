#ifndef BYPASSHELPPAGE_H
#define BYPASSHELPPAGE_H

#include "mybase.h"

namespace Ui {
    class ByPassHelpPage;
}

class ByPassHelpPage : public MyBase
{
    Q_OBJECT

public:
    explicit ByPassHelpPage(QWidget *parent = 0);
    ~ByPassHelpPage();

private:
    Ui::ByPassHelpPage *ui;

private slots:
    void on_btnBack_clicked();
};

#endif // BYPASSHELPPAGE_H
