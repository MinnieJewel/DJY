#ifndef BYPASSPAGE_H
#define BYPASSPAGE_H

#include "mybase.h"
class QLabel;
namespace Ui {
    class ByPassPage;
}

class ByPassPage : public MyBase
{
    Q_OBJECT

public:
    explicit ByPassPage(QWidget *parent = 0);
    ~ByPassPage();
    void setByPass(QLabel* label, bool bypass);
    bool getBypass();
    void updatePage();

private:
    Ui::ByPassPage *ui;
    bool isBypass;
};

#endif // BYPASSPAGE_H
