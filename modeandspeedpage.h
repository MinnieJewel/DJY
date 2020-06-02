#ifndef MODEANDSPEEDPAGE_H
#define MODEANDSPEEDPAGE_H

#include "mybase.h"
class QTableWidget;
namespace Ui {
    class ModeAndSpeedPage;
}

class ModeAndSpeedPage : public MyBase
{
    Q_OBJECT

public:
    explicit ModeAndSpeedPage(QWidget *parent = 0);
    ~ModeAndSpeedPage();
    void initialTableView(QTableWidget* table);
    void fillTableName(QTableWidget* table);
    void updatePage();

private:
    Ui::ModeAndSpeedPage *ui;
    QTableWidget* modeSpeedTable;

private slots:
    void on_btnBack_clicked();
};

#endif // MODEANDSPEEDPAGE_H
