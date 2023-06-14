#include "Bank.h"

Bank::Bank()
{
	c = nullptr;
	sizeClient = 0;
}

void Bank::addClient()
{
	if (c == nullptr || sizeClient == 0)
	{
		sizeClient++;
		c = new Client[sizeClient];
	}
	else
	{
		Client* tempC = new Client[sizeClient + 1];
		for (int i = 0; i < sizeClient; i++)
			tempC[i] = c[i];
		delete[] c;
		c = tempC;
		sizeClient++;
	}
}

void Bank::delClient(int id)
{
	bool isId = false;
	for (int i = 0; i < sizeClient; i++) {
		if (id == c[i].getId())
		{
			Client* tempC = new Client[sizeClient - 1];
			for (int i = 0; i < sizeClient; i++) {
				if (id == c[i].getId())
					isId = true;

				if (!isId)
					tempC[i] = c[i];
				else
					tempC[i] = c[i + 1];
			}
			delete[] c;
			c = tempC;
			sizeClient--;
			break;
		}
	}
}

void Bank::transferMoney(int idFrom,int idTo, unsigned money)
{
	int indexTo = -1;
	int indexFrom = -1;
	for (int i = 0; i < sizeClient; i++) {
		if (idFrom == c[i].getId())
			indexFrom = i;
		if (idTo == c[i].getId())
			indexTo = i;
	}
	if (indexTo != -1 && indexFrom != -1) {
		if (c[indexFrom].getBalance() >= money) {
			c[indexFrom].withdrawMoney(money);
			c[indexTo].addMoney(money);
		}
		else
			return;
	}
	else
		return;
}

void Bank::addMoney(int id, unsigned money)
{
	for (int i = 0; i < sizeClient; i++)
		if (c[i].getId() == id)
			c[i].addMoney(money);
}

void Bank::outClient(int id)
{
	for (int i = 0; i < sizeClient; i++)
		if (id == c[i].getId())
			cout << "Id client: " << c[i].getId() << endl << "Balance: " << c[i].getBalance();
}

Bank::~Bank()
{
	if (c != nullptr)
		delete[] c;
}
