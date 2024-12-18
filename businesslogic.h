#ifndef BUSINESS_H
#define BUSINESS_H

#include "bank.h"
#include  "concretebankdep.h"  // Исправлено на правильное имя

class BusinessLogic {
    AbstractService* credit;
    AbstractService* deposit;

public:
    void choice(Bank&, Bank&, Client*);
};

#endif