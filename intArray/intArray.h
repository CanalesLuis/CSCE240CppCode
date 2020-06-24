//cannot change the presedence of operators
//cannot change the number of operands (arguments)

#include <iostream>
using namespace std;

class intArray 
{
	
	friend ostream& operator<<(ostream& out, intArray& rhs)

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
	void operator()(int,int,int);
    
    //void operator-(); //unary, however this is not 
    				  //really how we want this to work... 
	intArray operator-();
    
	//non-concascadable
	void operator=(intArray&;);
	
	
	
    
    void operator+(int);
    void operator+(intArray&);
    void operator=(intArray&);
    
    
    
    intArray& operator=(intArray);
    intArray operator+(intArray&);
    
     
    
    void operator<<(ostream& os);
    
    
    //garbage int, just allows knows post
    intArray& operator++(int); //post
    intArray& operator++(); //pre
    
	
private:
    int size;
    int *data;

};


