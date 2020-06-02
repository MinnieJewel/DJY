#include "database.h"

void Database::updateHVACSignals()
{
    this->hvac1Version.sprintf("%d.%d", this->crrcMvb->getUnsignedChar(0x901,8),this->crrcMvb->getUnsignedChar(0x901,7));
    this->hvac2Version.sprintf("%d.%d", this->crrcMvb->getUnsignedChar(0x911,8),this->crrcMvb->getUnsignedChar(0x911,7));
}
