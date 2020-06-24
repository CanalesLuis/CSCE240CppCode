

#ifndef INTARRAY_H //compiler directives
#define INTARRAY_H

#include <iostream>
#include <cstdlib>
using namespace std;

class intArray {

public:
    intArray();
    intArray(int _size);
    intArray(int _size, int content);
    intArray(const intArray &);
    ~intArray();

    void Print() const;

    void setData(int index, int value);
    void PrintSize() const;
    int getSize();
    
    void setSize(int);
    void allocData(int);


private: //derived class will not have direct access to these variables
		 //getters/setters to access, or change to protected
    int size;
    int *data;
    
protected:	//child classes can call 
	void setSize(int);
    void allocData(int);

};

#endif /* INTARRAY_H */

