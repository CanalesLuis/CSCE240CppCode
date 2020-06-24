/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Account object
 * 
 * Copyright (C) 2019 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/

#inlcude <iostream>
#include "Account.h"

using namespace std;


Account::Account() {
	balance = 0.0;
	name = new char[10];
}

//Alternate Constructor
Account::Account(double start)	{
	//balance = start;
	setBalance(start);
}

Account::Account(double start, char* name)
{
	setBalance(start);
	cout << name << endl; // testercf
	name = name;
}

double Account::getBalance()	{
	return balance;
}

void Account::setBalance(double newBal)	{
	balance = newBal;
}

void Account::print()
{
	cout << "Name of account holder: " << name << endl;
	cout << "Balance: " << balance << endl;
}


Account::~Account()
{
	delete [] name;
}