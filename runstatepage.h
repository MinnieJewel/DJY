#ifndef RUNSTATEPAGE_H
#define RUNSTATEPAGE_H

#include "mybase.h"
class QLabel;
namespace Ui {
    class RunStatePage;
}

class RunStatePage : public MyBase
{
    Q_OBJECT

public:
    explicit RunStatePage(QWidget *parent = 0);
    ~RunStatePage();
    void dcdcPercent(unsigned char dcdcPercent);
    void levelPercent(signed short int levelPercent);
    void updatePage();
    void updateSignal(bool signal);
    void updateDCDC(QLabel *label, unsigned char dcdcState1, unsigned char dcdcState2);
    void updateHSCB (QLabel *label, unsigned char hscbState);
    void updateACU (QLabel *label, unsigned char acuState);
    void updateBCU (QLabel *label, unsigned char bcuState);
    void updateTBCU (QLabel *label, unsigned char tbcuState);
    void updateTrackBrake(QLabel *label, bool on);
    void updateIcons(QLabel *label, bool state);


private:
    Ui::RunStatePage *ui;
    //int dcdcNumberPosition, dcdcPointNumber, levelNumber, levelPoint, dcdcHeight, levelTractHeight, levelBrakeHeight;


private slots:
    void on_btnDCDC_toggled(bool checked);
    void on_btnManual_toggled(bool checked);
};

#endif // RUNSTATEPAGE_H
