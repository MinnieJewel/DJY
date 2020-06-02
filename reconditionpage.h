#ifndef RECONDITIONPAGE_H
#define RECONDITIONPAGE_H

#include "mybase.h"
class QButtonGroup;

namespace Ui {
    class ReconditionPage;
}

class ReconditionPage : public MyBase
{
    Q_OBJECT

public:
    explicit ReconditionPage(QWidget *parent = 0);
    ~ReconditionPage();

public slots:
    void onButtonClicked(int);
    void onRimCutBtnClicked(bool);

private:
    Ui::ReconditionPage *ui;
    QButtonGroup* buttonGroup;
};

#endif // RECONDITIONPAGE_H
