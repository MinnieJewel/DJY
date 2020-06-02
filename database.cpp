#include "database.h"

Database::Database()
{
    HMIPosition = MainGetDefaultPara::getInt("/Position/HMI");
    password = MainGetDefaultPara::getString("/Password/Password");
    initialHmiSignals();
}

void Database::updateDatabase(CrrcMvb *crrcMvb)
{
    this->crrcMvb = crrcMvb;
    this->HMiCT_LifeSignal_U8 ++;
    this->updateHmiSignals();
    this->updateRiomsSignals();
    this->updateCcuSignals();
    this->updateErmSignals();
    this->updateDCDCSignals();
    this->updateHVACSignals();
    this->updateTBCUSignals();
}

