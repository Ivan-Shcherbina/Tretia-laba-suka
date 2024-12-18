#include "bank1department.h"

AbstractService* Bank1Department::createCredit(Client* c, int rate) {
    CreditBank1* cb1 = new CreditBank1();
    cb1->setInfo(c, rate);
    return cb1;
}

AbstractService* Bank1Department::createDeposit(Client* c, int rate) {
    DepositBank1* db1 = new DepositBank1();
    db1->setInfo(c, rate);
    return db1;
}

AbstractService* Bank2Department::createCredit(Client* c, int rate) {
    CreditBank2* cb2 = new CreditBank2();
    cb2->setInfo(c, rate);
    return cb2;
}

AbstractService* Bank2Department::createDeposit(Client* c, int rate) {
    DepositBank2* db2 = new DepositBank2();
    db2->setInfo(c, rate);
    return db2;
}
