#include "concreteservice.h"

void CreditBank1::getInfo() {
    cout << nameClient << ". Credit of Bank1: ";
    cout << "sum " << sumCredit << " rate " << rate << "%\n";
}

void CreditBank2::getInfo() {
    cout << nameClient << ". Credit of Bank2: ";
    cout << "sum " << sumCredit << " rate " << rate << "%\n";
}

void DepositBank1::getInfo() {
    cout << nameClient << ". Deposit of Bank1: ";
    cout << "sum " << sumDeposit << " rate " << rate << "%\n";
}

void DepositBank2::getInfo() {
    cout << nameClient << ". Deposit of Bank2: ";
    cout << "sum " << sumDeposit << " rate " << rate << "%\n";
}
