#ifndef NUMBERBUTTONS_H
#define NUMBERBUTTONS_H

#include <QWidget>
class QButtonGroup;
namespace Ui {
    class NumberButtons;
}

class NumberButtons : public QWidget
{
    Q_OBJECT

public:
    explicit NumberButtons(QWidget *parent = 0);
    ~NumberButtons();
    QButtonGroup* groupButtons;
    void hideButtons(bool confirm, bool clear, bool back);
    void disableButtons(bool clear, bool confirm, bool back);
private:
    Ui::NumberButtons *ui;            
};

#endif // NUMBERBUTTONS_H
