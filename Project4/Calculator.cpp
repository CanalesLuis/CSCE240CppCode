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
 
 #include "Calculator.h"
 
 //Default Constructor
 Calculator::Calculator()// Calculator::Calculator() : cleared(true), resulkt(0.0), expersiion("0.0")
 {
	expression = "0.0";
	result =0.0;
	cleared = true;
 }
 
 //Alternate Constructor
 Calculator::Calculator(double num)// Calculator::Calculator(double num) : Calcualtor(), cleared(true)
 {
	expression = to_string(num);
	result = num;
	cleared = true;
 }
 
 //adds num to result and updates expression returns result
 double Calculator::add(double num)
 {
	result = result + num;
	expression = "("+ expression + ") + " + to_string(num);
	return result;
 }
 
 //adds num to result and updates expression returns result
 double Calculator::subtract(double num)
 {
	result = result - num;
	expression = "("+ expression + ") - " + to_string(num);
	return result;
 }
 
 //adds num to result and updates expression returns result
 double Calculator::multiply(double num)
 {
	result = result * num;
	expression = "("+ expression + ") * " + to_string(num);
	return result;
 }
 
 //adds num to result and updates expression returns result
 double Calculator::divide(double num)
 {
	 //cannot divide by 0, print error if 0 inputted, result set to 0, expression to undefined
	if(num == 0.0)
	{
		cout << "Error cannot divide by 0" << endl;
		result = 0.0;
		expression = "Undefined";
		
		return result;
	}
	
	result = result / num;
	expression = "("+ expression + ") / " + to_string(num);
	return result;
 }
 
 // takes result to int power and updates expression returns result
 double Calculator::power(int exp)
 {
	if(exp == 0)
	{
		result = 1.0;
		expression = "pow( "+ expression + " , " + to_string(exp)+ " ) ";
		return result;
	}
	for(int i=0; i<exp-1; i++)
	{
		result = result * result;
	}
	expression = "pow( "+ expression + " , " + to_string(exp)+ " )";
	return result;
 }
 
 //sets result first double to the power of second double
 double Calculator::power(double num, double exp)
 {
	if(exp == 0)
	{
		result = 1.0;
		expression = to_string(result);
		return result;
	}
	if(result == 0.0 && expression == "0.0")
	{
		result = num;
		for(int i=0; i<exp-1; i++)
		{
			result = result * result;
		}
		expression = "pow( "+ to_string(num) + " , " + to_string(exp)+ " ) ";
		return result;
	}
	cout << "Error, cannot call power(double, int) when not in clear state" << endl;
	return result;
 }
 
 void Calculator::clear()
 {
	 result = 0.0;
	 expression = "0.0";
 }
 
 void Calculator::print()
 {
	 cout << "Expression evaluated:" << endl;
	 cout << expression << " = "<< endl;
	 cout << "Result: " << result << endl;
 }