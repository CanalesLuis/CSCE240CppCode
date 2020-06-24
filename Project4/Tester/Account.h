/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Account object header
 * 
 * Copyright (C) 2019 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/
#include <iostream>
#include <string>
using namespace std;
/*
 * The following will define the member variables as well as the functions 
 * of the Account object. 
 * */
 
 
class Account {
	public:
		//static int numberAccounts;
		//Constructors
		Account(); //Default constructor
		Account(double);
		Account(double, string);
		Account(const Account&); //copy constructor
		
		//~Account(); //Destructor
		
		//Functions
		double getBalance() const;
		string getName() const; 
		void print();
		
		int getNumAccounts();
		
		Account operator+(Account&);
		void operator=(Account&);
    double balance;
	private:		//Why make something private?
		static int numberAccounts;
		
		string name;

		void setBalance(double);
		void setName(string); 
};
