#pragma once
#include "Client.h"

#include <iostream>

using namespace std;

class Bank
{
private:
	Client* c;
	int sizeClient;
public:
	Bank();

	void addClient();

	void delClient(int id);

	void transferMoney(int idFrom, int idTo, unsigned money);

	void addMoney(int id, unsigned money);

	void outClient(int id);

	~Bank();
};

