#include <iostream>
#include "Bank.h"
#include "Client.h"

using namespace std;

int Client::id = 0;

int main()
{
    Bank b1;
    b1.addClient();
    b1.addClient();
    b1.addClient();
    b1.addClient();
    b1.addMoney(1, 900);
    b1.transferMoney(1, 2, 300);
    b1.delClient(4);
    b1.outClient(1);
    b1.outClient(2);
}
