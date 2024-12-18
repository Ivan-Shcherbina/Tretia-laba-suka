#include "businesslogic.h"
#include "client.h"
#include "bank.h"

int main() {
    const int n = 5;
    srand(time(0));

    string names[n] = {"Abramov", "Borisov", "Verbina", "Grishin", "Dubovik"};
    int psc[n] = {20000, 21000, 40000, 15000, 25000};
    int psd[n] = {41000, 33000, 22000, 55000, 35000};

    Client* client[n];
    
    for (int i = 0; i < n; i++) {
        client[i] = new Client(names[i], psc[i], psd[i]);
    }

    int mc1 = 30;
    int md1 = 18;
    int mc2 = 29;
    int md2 = 17;

    Bank b1(mc1, md1);
    Bank b2(mc2, md2);

    BusinessLogic bs;

    for (int i = 0; i < n; i++) {
        bs.choice(b1, b2, client[i]);
        client[i]->credit->getInfo();
        client[i]->deposit->getInfo();
    }

    for (int i = 0; i < n; i++) {
        delete client[i]->credit;
        delete client[i]->deposit;
        delete client[i];
    }

    return 0;
}
