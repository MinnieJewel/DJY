#ifndef SETTINGPAGE_H
#define SETTINGPAGE_H

#include "mybase.h"
class QButtonGroup;
class QLabel;
namespace Ui {
    class SettingPage;
}

class SettingPage : public MyBase
{
    Q_OBJECT

public:
    explicit SettingPage(QWidget *parent = 0);
    ~SettingPage();
    QButtonGroup *setGroup;

private slots:
    void onNumberClicked(int);
private:
    Ui::SettingPage *ui;
};

#endif // SETTINGPAGE_H
