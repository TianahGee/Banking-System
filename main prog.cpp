#include <iostream>
#include <string>
using namespace std;

struct Customer
{
	string name;
	int acctNum;
	string address;
	string sex;
	string occupation;
	string place_of_work;
};

string input;
int choice;
double balance;
int entered_acctNum;
double account_fee = 25;
double amount_paid;
void DisplayProfile();
void EditProfile();
void DeleteProfile();
void Application();
void Exit();
void Balance();
double Withdrawal();
double Deposit();
double Transfer();
void mainMenu();

int main()
{
	cout << "	WELCOME TO FIRSTBANK	" << endl;

	cout << "	*****************************	" << endl;

	Application();
	
	cout << "Please enter your account number" << endl;
	Customer temp;
	cin >> temp.acctNum;
	if (temp.acctNum == entered_acctNum)
	{
		cout << "WELCOME " << temp.name << endl;
		mainMenu();
		cout << "Please enter your choice " << endl;
		cin >> input;

		switch (choice)
		{
		case 1: Balance();
			break;
		case 2: Withdrawal();
			break;
		case 3: Deposit();
			break;
		case 4: Transfer();
			break;
		case 5: DisplayProfile();
			break;
		case 6: EditProfile();
			break;
		case 7: DeleteProfile();
			break;
		case 8: Exit();
			break;
		default: cout << "You have entered the wrong choice " << endl;
		}

	}
	else
	{
		cout << "Please try again " << endl;
	}

	return 0;
}

//********************************

void mainMenu()
{
	cout << "1- Check Balance " << endl;
	cout << "2- Withdrawal " << endl;
	cout << "3- Deposit " << endl;
	cout << "4- Transfer " << endl;
	cout << "5- Display Profile " << endl;
	cout << "6- Edit Profile " << endl;
	cout << "7- Delete Profile " << endl;
	cout << "8- Exiting....." << endl;
}

void DisplayProfile()
{
	Customer C1;
	cout << "Name: " << C1.name << endl;
	cout << "AccountNumber: " << C1.acctNum << endl;
	cout << "Address: " << C1.address << endl;
	cout << "Sex: " << C1.sex << endl;
	cout << "Occupation: " << C1.occupation << endl;
	cout << "Place of work: " << C1.place_of_work << endl;
}

void EditProfile()
{
	DeleteProfile();
	Customer C1;
	cout << "Please enter your name:" << C1.name << endl;
	cin >> input;
	cout << "Address: " << C1.address << endl;
	cin >> C1.address;
	cout << "Sex: " << C1.sex << endl;
	cin >> C1.sex;
	cout << "Occupation: " << C1.occupation << endl;
	cin >> C1.occupation;
	cout << "Place of work: " << C1.place_of_work << endl;
	cin >> C1.place_of_work;
}


void Application()
{
	Customer C1;
	cout << "Name: " << flush;
	cin >> C1.name;
	cout << "Address: " << flush;
	cin >> C1.address;
	cout << "Sex: " << flush;
	cin >> C1.sex;
	cout << "Occupation: " << flush;
	cin >> C1.occupation;
	cout << "Place of work: " << flush;
	cin >> C1.place_of_work;

	cout << "--------------------------------" << endl;

	Customer temp;
	int cardnum, expiry, cvv;
	cout << "Do you want to open an account" << endl;
	cout << "if yes " << endl;
	cout << "Pay a fee of $25 " << endl;
	cout << "Enter your card number " << endl;
	cin >> cardnum;
	cout << "Enter your card expiry date " << endl;
	cin >> expiry;
	cout << "Enter your card CVV " << endl;
	cin >> cvv;

	cout << "WELCOME..." << endl;
	cout << "Your account number is: " << temp.acctNum << endl;
}

void DeleteProfile()
{
	Customer C1;
	C1.name= " ";
	C1.address= " ";
	C1.sex= " ";
	C1.occupation = " ";
	C1.place_of_work = " ";
}
void Balance()
{
	cout << "Your account balance is " << balance << endl;
}

double Withdrawal()
{
	double amount;
	cout << "Please enter the amount you wish to withdraw " << flush;
	cin >> amount;
	balance = balance - amount;
	Balance();
	return amount;
}

double Deposit()
{
	double amount;
	cout << "Please enter the amount you wish to deposit " << flush;
	cin >> amount;
	balance = balance + amount;
	Balance();
	return amount;
}

double Transfer()
{
	int intrabank = 0, otherbanks = 1000;
	double amount;
	string bank;
	int recipientNum;
	cout << "Please enter the name of the bank " << endl;
	cin >> bank;
	if (otherbanks)
	{
		cout << "Please enter the amount you wish to transfer " << flush;
		cin >> amount;
		amount = amount + 1000;
		cout << "Please enter the recipient account number " << flush;
		cin >> recipientNum;
		cout << "You are transferring the sum of " << "$" << amount << " to " << recipientNum << endl;
		cout << "Sent .....Transaction Completed " << endl;
		balance = balance - amount;
	}
	else
	{
		cout << "Please enter the amount you wish to transfer " << flush;
		cin >> amount;
		cout << "Please enter the recipient account number " << flush;
		cin >> recipientNum;
		cout << "You are transferring the sum of " << "$" << amount << " to " << recipientNum << endl;
		cout << "Sent .....Transaction Completed " << endl;
		balance = balance - amount;
	}
	return amount;
}

void Exit()
{
	cout << "You are Exiting...... " << endl;
	cout << "Thank you for banking with us " << endl;
}