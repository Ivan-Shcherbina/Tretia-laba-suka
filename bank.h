#ifndef BANK_H
#define BANK_H

#include <cstdlib>
#include <ctime>

class Bank {
protected:
    int minCreditRate;
    int minDepositRate;

public:
    Bank(int, int);
    int getCreditRate();
    int getDepositRate();
};

#endif
