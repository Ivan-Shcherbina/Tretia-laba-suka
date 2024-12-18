#ifndef C_SERVICE_H
#define C_SERVICE_H

#include "abstractservice.h"

class CreditBank1 : public AbstractService {
public:
    void getInfo();
};

class CreditBank2 : public AbstractService {
public:
    void getInfo();
};

class DepositBank1 : public AbstractService {
public:
    void getInfo();
};

class DepositBank2 : public AbstractService {
public:
    void getInfo();
};

#endif
