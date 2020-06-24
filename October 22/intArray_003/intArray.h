//cannot change the presedence of operators
//cannot change the number of operands (arguments)

#include <iostream>
using namespace std;

class intArray 
{
	friend ostream& operator<<(ostream&, intArray&);
	
	
	friend istream& operator>>(istream&, intArray&);

public:
    intArray();
    intArray(int _size);
    intArray(int _size, int array[]);
    intArray(const intArray&);
    ~intArray(); 
    
    void Print();
    void PrintSize();
    int Size();
    
    
    int operator[](int);
      
    void operator()(int,int); 
    //void operator()(int,int,int); 
    
    //void operator-(); //unary, however this is not 
    				  //really how we want this to work... 
    intArray operator-();
    
    //non-concascadable
    //void operator=(intArray);
    
    //cascade-capable
    intArray& operator=(intArray);
    
    //For today: 
    
    intArray operator+(intArray&);
    intArray operator*(intArray&); //dem. order of oper.
    
    
    //void operator<<(ostream& os);
    
    intArray& operator++(int); //post x++
	intArray& operator++(); //pre ++x
    
 
private:
    int size;
    int *data;

};


