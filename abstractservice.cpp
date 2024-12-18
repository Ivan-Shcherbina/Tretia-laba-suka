#include "abstractservice.h"

AbstractService::~AbstractService() {}

void AbstractService::setInfo(Client* c, int r) {
    nameClient = c->getName();
    sumCredit = c->getPrincipalSumCredit();
    sumDeposit = c->getPrincipalSumDeposit();
    rate = r;
}
