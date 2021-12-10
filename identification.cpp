#include "Identification.h"

bool PinIdentification(int pin, int clientPin)
{
	if (pin == clientPin)
		return true;
	return false;
}

int InputPin()
{
	int pin = 0;
	cout << "Please input your PIN: ";
	cin >> pin;
	return pin;
}