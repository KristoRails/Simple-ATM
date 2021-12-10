#include <iostream>

//include user made headers
#include "Identification.h"
#include "Menu.h"
#include "Client.h"
using namespace std;

void isMoneyOk(Client& myClient, int choice)
{
	bool isMoneyOk = false;
	int newMoney = 0;

	cout << "Enter value:  (must divide with 10): " << endl;

	while (isMoneyOk == false)
	{
		cin >> newMoney;
		if (newMoney % 10 == 0)
		{
			isMoneyOk = true;

			if (choice == 1)
			{
				myClient.updateBalance(newMoney);
			}
			else if (choice == 2)
			{
				if (myClient.getBalance() >= newMoney)
				{
					myClient.withdrawBalance(newMoney);
				}
				else
				{
					cout << "Withdraw money is bigger than your balance!" << endl;
				}
			}
			else if (choice == 3)
			{
				if (myClient.getBalance() >= newMoney)
				{
					myClient.updateSavings(newMoney);
				}
				else
				{
					cout << "Insufficient funds" << endl;
				}
			}
			else if (choice == 4)
			{
				if (myClient.getSavings() >= newMoney)
				{
					myClient.withdrawSavings(newMoney);
				}
				else
				{
					cout << "Insufficient funds" << endl;
				}
			}
		}
		else
		{
			cout << "Please enter a valid number (i.e: 400 lei)" << endl;
		}
	}
}

int main()
{

	//Create Client Object
	Client myClient("Kristo", 1337, 10000, 7000);

	int pin = InputPin();
	bool pin_ok = PinIdentification(pin, myClient.getPin());
	system("CLS");
	if (pin_ok == true)
	{
		int choice = -1;
		while (choice != 0)
		{
			ATM_MainMenu();
			cout << "Enter option: ";
			cin >> choice;
			switch (choice)
			{
			case 1:
			{
				system("CLS");
				isMoneyOk(myClient, choice);
				cout << "Your new balance is: " << myClient.getBalance() << endl;
				break;
			}
			case 2:
			{
				system("CLS");
				isMoneyOk(myClient, choice);
				cout << "Your new balance is: " << myClient.getBalance() << endl;
				break;
			}
			case 3:
			{
				system("CLS");
				isMoneyOk(myClient, choice);
				cout << "Your new balance is: " << myClient.getBalance() << endl;
				cout << "Your new saving is: " << myClient.getSavings() << endl;
				break;
			}
			case 4:
			{
				system("CLS");
				isMoneyOk(myClient, choice);
				cout << "Your new balance is: " << myClient.getBalance() << endl;
				cout << "Your new saving is: " << myClient.getSavings() << endl;
				break;
			}
			case 5:
			{
				system("CLS");
				break;
			}
			case 6:
			{
				system("CLS");
				cout << "User Balance: " << myClient.getBalance() << endl;
				cout << "User Savings: " << myClient.getSavings() << endl;
				break;
			}
			case 0:
			{
				break;
			}
			}
		}
	}
	else
		cout << "Incorrect PIN. EXITING...";
}