#ifndef NETWORKPAGE_H
#define NETWORKPAGE_H

#include "mybase.h"
class QLabel;
namespace Ui {
    class NetworkPage;
}

class NetworkPage : public MyBase
{
    Q_OBJECT

public:
    explicit NetworkPage(QWidget *parent = 0);
    ~NetworkPage();
    void paintEvent(QPaintEvent *);
    void setState(QLabel* label, bool onState, bool slave);
    void updatePage();
private:
    Ui::NetworkPage *ui;
};

#endif // NETWORKPAGE_H
