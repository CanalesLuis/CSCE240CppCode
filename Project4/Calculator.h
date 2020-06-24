/*****************************************************************************
 * Name: Luis Canales
 * Time: 10:00 pm October 17, 2019
 * Function: Calculator object
 * Object can add, sub, multiply, divide, take pow, clear, print, set num and take pow
 * 
 * Samples
 * Inputs: command input
 * example: calc1.add(5)
 * 
 * 
 * Outputs: expression and result
 * Expression evaluated:
 * (0.0) + 5.000000 =
 * Result: 5
 * 
 * Copyright (C) 2019 by Luis Canales
 *
 *****************************************************************************/
 
 #include <string>
 #include <iostream>
 using namespace std;
 
 class Calculator	{
	 public:
	 
	 //Default Constructor
	 //initializes result ot zero, expression to 0.0 and initializes cleared to true
	 Calculator();
	 
	 //Alternative Constructor
	 //sets result to num, sets expression to num, and initialiez cleared to true
	 Calculator(double);
	 
	 //Functions
	 
	 double add(double); //adds num to result and updates expression returns result
	 
	 double subtract(double); //subtracts num from result updates expression returns result
	 
	 double multiply(double); // multiplies result by num and updates expression returns result
	 
	 double divide(double); // divides result by num and updates expression and returns result
	 //cannot divide by 0, print error if 0 inputted, result set to 0, expression to undefined
	 
	 double power(int); // takes result to int power and updates expression returns result
	 //if int is 0 return 1.0, no using built in functions
	 
	 double power(double, double); //sets result first double to the power of second double
	 
	 void clear();
	 
	 void print();
	 
	 private:
	 string expression;
	 double result;
	 bool cleared;
	 
 };