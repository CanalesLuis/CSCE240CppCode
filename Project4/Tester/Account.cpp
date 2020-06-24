/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Account object
 * 
 * Copyright (C) 2019 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/


#include "Account.h"

int Account::numberAccounts = 0;

Account::Account() 
{
	balance = 0.0;
	name = "";
	numberAccounts++;
}

//Alternate constructor
Account::Account(double start)
{
	//balance = start;
	setBalance(start);
	name = ""; 
	numberAccounts++;
}

Account::Account(double start, string myName)
{
	setBalance(start);
	name = myName;
	numberAccounts++;
}

Account::Account(const Account& obj2)
{
	//balance = obj2.getBalance();
	setBalance(obj2.getBalance());
	setName(obj2.getName());
} 

int Account::getNumAccounts()
{
	return numberAccounts;
}

string Account::getName() const
{
	return name; 
}

double Account::getBalance() const
{
	return balance;
}

void Account::setBalance(double newBal)
{
	balance = newBal; 
	//this->balance = newBal;
}

void Account::setName(string newName)
{
	name = newName;
}

void Account::print()
{
	cout << "Balance: " << balance << endl;
	cout << "Name of account holder: " << name << endl;
	
}

void Account::operator+(Account& obj2)
{
	this->balance = this->balance + obj2.getBalance();
}



/*Account::~Account()
{
	delete [] name;
}*/

