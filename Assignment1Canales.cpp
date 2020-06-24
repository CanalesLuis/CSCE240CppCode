/***************************************************************************
 * Name: Luis Canales
 * Email: lcanales@email.sc.edu
 * Function: Take in first name last and execute a command based on user input
 * Input: First name, Last Name, Command A, B, other
 * Output:
 *
 * Time Completed: September 10, 2019 : 5:25 pm
 * Comments: The Program compiles and runs the proper output on the linux environment
 that I have from CSCE 212, im unsure if it runs on other the environment the grader will use.
 ***************************************************************************/

 #include <cstdlib>
 #include <iostream>

 using namespace std;

 void add(int, int);
 void subtract(int, int);
 void multiply(int, int);
 void divide(int, int);
 void modulo(int, int);

 //example
 /*
 int a;
 char b;
 int c;
 cin >> a >> b >> c;
 //this is how to do the read in
 */

 int main (int argc, char **argv)
 {
	 cout << "Welcome to my simple calculator" << endl;
	 char cont = 'y';
	 int n1;
	 char oper;
	 int n2;

	 while(continue = 'y')
	 {
		 cout << "Please enter your statement:" << endl;
		 cin >> n1 >> oper >> n2 >> endl;

		 if(oper == '+')
		 {
			 add(n1, n2);
		 }
		 else if(oper == '-')
		 {
			 subtract(n1, n2);
		 }
		 else if(oper == '*')
		 {
			 multiply(n1, n2);
		 }
		 else if(oper == '/')
		 {
			 divide(n1, n2);
		 }
		 else if(oper == '%')
		 {
			 modulo(n1, n2);
		 }
	 }
 }

 void add(int n1, int n2)
 {
	 int sum = n1 + n2;
	 cout << n1 << " + " << n2 << " = " << sum << endl;
 }

 void subtract(int n1, int n2)
 {
	 int sum = n1 - n2;
	 cout << n1 << " - " << n2 << " = " << sum << endl;
 }

 void multiply(int n1, int n2)
 {
	 int sum = n1 * n2;
	 cout << n1 << " * " << n2 << " = " << sum << endl;
 }

 void divide(int n1, int n2)
 {
	 int sum = n1 / n2;
	 cout << n1 << " / " << n2 << " = " << sum << endl;
 }

 void modulo(int n1, int n2)
 {
	 int sum = n1 % n2;
	 cout << n1 << " % " << n2 << " = " << sum << endl;
 }
