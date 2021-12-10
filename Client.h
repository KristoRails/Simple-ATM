#ifndef CLIENT_H
#define CLIENT_H
#include "headers.h"

class Client
{
private:
	string name;
	int pin;
	float balance;
	float savings_balance;

public:
	//constructor (might have to change it)
	Client(string name, int pin, float balance, float savings);

	//Get Client information
	string getName();
	int getPin();
	float getBalance();
	float getSavings();

	//Update Client information
	void updateBalance(float money);
	void updateSavings(float money); // subtract from balance to add to savings
	void withdrawBalance(float money);
	void withdrawSavings(float money);
};

#endif