#ifndef NETWORKHELPPAGE_H
#define NETWORKHELPPAGE_H

#include "mybase.h"

namespace Ui {
    class NetworkHelpPage;
}

class NetworkHelpPage : public MyBase
{
    Q_OBJECT

public:
    explicit NetworkHelpPage(QWidget *parent = 0);
    ~NetworkHelpPage();

private:
    Ui::NetworkHelpPage *ui;

private slots:
    void on_btnBack_clicked();
};

#endif // NETWORKHELPPAGE_H
