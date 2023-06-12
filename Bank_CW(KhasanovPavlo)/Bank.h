#pragma once
#include "Client.h"

class Bank
{
private:
	Client* c;
	int sizeClient;
public:
	Bank();

	void addClient();

	void delClient(int id);

	void transferMoney(int id, unsigned money);

	~Bank();
};

