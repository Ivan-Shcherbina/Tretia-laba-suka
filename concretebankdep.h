// concretebankdep.h
#ifndef CONCRETEBANKDEP_H
#define CONCRETEBANKDEP_H

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
