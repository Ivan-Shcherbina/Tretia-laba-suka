#include "bank.h"

Bank::Bank(int mc, int md) : minCreditRate(mc), minDepositRate(md) {}

int Bank::getCreditRate() {
    return minCreditRate + rand() % 9;
}

int Bank::getDepositRate() {
    return minDepositRate + rand() % 9;
}
