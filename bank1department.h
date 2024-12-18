#ifndef BANK_DEPS_H
#define BANK_DEPS_H

#include "abstractbankdep.h"
#include "concreteservice.h"

class Bank1Department : public AbstractBankDepartment {
public:
    AbstractService* createCredit(Client*, int);
    AbstractService* createDeposit(Client*, int);
};

class Bank2Department : public AbstractBankDepartment {
public:
    AbstractService* createCredit(Client*, int);
    AbstractService* createDeposit(Client*, int);
};

#endif
