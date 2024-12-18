#include "client.h"

Client::Client(string nm, int psc, int psd) : name(nm), principalSumCredit(psc), principalSumDeposit(psd) {}

string Client::getName() {
    return name;
}

int Client::getPrincipalSumCredit() {
    return principalSumCredit;
}

int Client::getPrincipalSumDeposit() {
    return principalSumDeposit;
}
