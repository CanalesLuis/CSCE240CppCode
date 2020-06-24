#include <iostream>
#include <cstdlib>
#include "intArray.h"

using namespace std;

int main (int argc, char **argv)
{ 
	
	intArray obj1; 
	
	intArray obj2(10);
	
	int arr[5] = {1,2,3,4,5};
	intArray obj3(5,arr);
	//obj3.get(0);
	cout << obj3[0] << endl;
	
	obj3.Print();
	
	obj3(0,10);
	
	obj3.Print();
	
	obj2 = -obj3;
	
	obj3.Print();
	
	//obj1 << cout;
	
	//cout << obj1;
	//cout.operator << obj1;
	
	obj3 = obj1 +obbj2;
	
	//!obj3;
	
	return 0; 
}
//valgrind