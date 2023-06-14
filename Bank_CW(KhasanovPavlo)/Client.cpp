#include "Client.h"

Client::Client()
{
	id++;
	identification = id;
	balance = 0;
}

void Client::addMoney(unsigned int sum)
{
	balance += sum;
}

int Client::getId()
{
	return identification;
}

long Client::getBalance()
{
	return balance;
}

void Client::withdrawMoney(unsigned int sum)
{
	balance -= sum;
}

Client::~Client()
{
	--id;
}
