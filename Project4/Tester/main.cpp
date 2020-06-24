/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Main driver for Account object
 * 
 * Copyright (C) 2019 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/
 
#include <cstdlib>
#include <iostream>
#include <string>
#include "Account.h"


int main(int argc, char** argv) 
{
	
	Account acct1(1000, "Casey"); 
	//cout << &acct1 <<  endl;
	//cout << "Size of object " << sizeof(acct1) << endl; //string-32 bytes and double- 8 bytes.
	
	//cout << acct1.numberAccounts << endl;
	cout << acct1.getNumAccounts() << endl;
	
	Account acct2(100);
	//cout << acct2.numberAccounts << endl;
	cout << acct2.getNumAccounts() << endl;
	
	Account acct1_new(acct1);
	acct1.print(); 
	acct1_new.print();
	
	//acct1.operator+(acct1_new);
	acct1 + acct1_new; 
	//acct3 = acct1.add(acct1_new);
	acct1.print(); 
	acct1_new.print();
	
	acct2 = acct1 + acct1_new; 
	acct2.operator=(acct1.operator+(acct1_new));
	cout << acct2 << endl; 
	cout.operator<<

    return 0;
}
