#pragma once
class Client
{
private:
	int identification;
	long balance;
	static int id;
public:
	Client();

	void addMoney(unsigned int sum);

	int getId();

	long getBalance();

	void withdrawMoney(unsigned int sum);

	~Client();
};

