/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Account object header
 * 
 * Copyright (C) 2019 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/

using namespace std;
/*
 * The following will define the member variables as well as the functions 
 * of the Account object. 
 * */
 
 
class Account {
	public:			
	
		//Constructors
		Account();	//Default constructor 
		Account(double);
		Account(double, char*);
		
		~Account(); //Destructor
		
		//Functions
		double getBalance();
		
		//void setBalance(double);
		
		//Member variables??
    
	private:		//Why make something private?
		double balance;
		char* name;
		
		void setBalance(double);

};
