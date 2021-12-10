#include "Client.h"


	Client::Client(string name, int pin, float balance, float savings)
	{
		this->name = name;
		this->pin = pin;
		this->balance = balance;
		this->savings_balance = savings;
	}

	//Getters
	string Client::getName()
	{
		return this->name;
	}
	int Client::getPin()
	{
		return this->pin;
	}
	float Client::getBalance()
	{
		return this->balance;
	}
	float Client::getSavings()
	{
		return this->savings_balance;
	}

	//Update functions
	void Client::updateBalance(float money)
	{
		this->balance += money;
	}
	void Client::updateSavings(float money)
	{
		this->savings_balance += money;
		this->balance -= money;
	}
	void Client::withdrawBalance(float money)
	{
		this->balance -= money;
	}
	void Client::withdrawSavings(float money)
	{
		this->balance += money;
		this->savings_balance -= money;
	}