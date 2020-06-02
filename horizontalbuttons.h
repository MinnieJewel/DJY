#ifndef HORIZONTALBUTTONS_H
#define HORIZONTALBUTTONS_H

#include <QWidget>
class QButtonGroup;
namespace Ui {
    class HorizontalButtons;
}

class HorizontalButtons : public QWidget
{
    Q_OBJECT

public:
    explicit HorizontalButtons(QWidget *parent = 0);
    ~HorizontalButtons();
    QButtonGroup* groupButtons;
    void disableButtons(bool clear, bool confirm, bool back);
private:
    Ui::HorizontalButtons *ui;
};

#endif // HORIZONTALBUTTONS_H
