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
#include "Account.h"


int main(int argc, char** argv) {
	
	char primName[3] = {'B', 'o','b'};
	char *myName = primName;
	
	Account myAccount(100, "Bob");
	
	myAccount.print();
	
	//myAccount.setBalance(100);
	
	//myAccount.balance = 100; //only if public
	
	//delete [] myAccount.name;
	
    return 0;
}
