#include "Bank.h"

Bank::Bank()
{
	c = nullptr;
	sizeClient = 0;
}

void Bank::addClient()
{
	if (c = nullptr)
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

Bank::~Bank()
{
	if (c != nullptr)
		delete[] c;
}
