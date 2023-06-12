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

	static int getId();

	void withdrawMoney(unsigned int sum);

	~Client();
};

