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
	/*cout << obj3[0] << endl;
	
	obj3.Print();
	
	obj3(0,10);
	
	obj3.Print();*/
	
	//(-obj3).Print(); 
	
	cout << "Obj 3 before: " << endl;
	obj3.Print();
	
	cout << "Obj 2 before: " << endl;
	obj2.Print();
	
	obj1 = (obj2 = -obj3);
	//obj1.operator=(obj2.operator=(obj3)); 
	
	obj3 = -obj1;
	//obj3.operator =(obj1.operator -());
	
	cout << "Obj 3 before: " << endl;
	obj3.Print();
	
	cout << "Obj 2 before: " << endl;
	obj2.Print();
	
	cout << "Obj 1 before: " << endl;
	obj1.Print();
	
	
	//obj3 = obj1 + obj2 * obj1;
	//obj3.operator =(obj1.operator +(obj2));
	cout << "Obj 3 after: " << endl;
	obj3.Print();
	
	cout << "Obj 2 after: " << endl;
	obj2.Print();
	
	
	obj2++; 
	++obj2;
	
	cout << "Obj 1 after: " << endl;
	obj1.Print();
	
	cin >> obj2; 
	
	//obj1 << cout;
	
	cout << "The value of the obj1 :" <<  obj1 << endl;
	//cout.operator<<(obj1); 
	
	//!obj3;

	
	return 0; 
}
