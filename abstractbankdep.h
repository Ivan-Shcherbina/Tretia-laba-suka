#ifndef A_BANKDEP_H
#define A_BANKDEP_H

#include "abstractservice.h"

class AbstractBankDepartment {
public:
    int rate;
    virtual AbstractService* createCredit(Client*, int) = 0;
    virtual AbstractService* createDeposit(Client*, int) = 0;
    virtual ~AbstractBankDepartment();
};

#endif
