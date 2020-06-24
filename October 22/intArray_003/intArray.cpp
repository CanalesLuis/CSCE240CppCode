
#include "intArray.h"

intArray::intArray()
{
    size = 0;
	data = new int[size];
}

intArray::intArray(int _size, int array[])
{
	size = _size;
	data = new int[size];
	
	for(int i = 0; i < size; i++)
	{
		data[i] = array[i];
	}
	
}

intArray::intArray(int _size)
{
	size = _size;
	data = new int[size];
	
	for(int i = 0; i < size; i++)
	{
		data[i] = 0;
	}
	
}

intArray::intArray(const intArray& array2)
{
	size = array2.size; //since they are the same object type we
						//have access but we should use getter.
	
    data = new int[size];
   
    for(int i = 0; i < size; i++)
    {
        data[i] = array2.data[i];
    }
}

int intArray::Size()
{
	return size;
}

void intArray::Print()
{
    for(int i=0; i < size; i++) 
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

void intArray::PrintSize()
{
    cout << "size: " << size << endl;
}

int intArray::operator[](int index)
{
	//if index valid: 
	return data[index]; 
}

void intArray::operator()(int index,int new_val)
{
	//if index is valid
	data[index] = new_val;
}

/*void intArray::operator-()
{
	for(int i= 0; i < size; i++)
	{
		data[i] = -1*data[i];
	}
}*/

intArray intArray::operator-()
{
	intArray temp(*this);
	for(int i= 0; i < size; i++)
	{
		temp.data[i] = -1*temp[i];
	}
	
	return temp;
}

/*void intArray::operator=(intArray rhs)
{
	delete [] data;
	size = rhs.Size(); 
	data = new int[size]; 
	for(int i = 0; i < size; i++)
	{
		//data[i] = rhs.data[i]; 
		data[i] = rhs[i]; 
	}
	
}*/
intArray& intArray::operator=(intArray rhs)
{
	delete [] data;
	size = rhs.Size(); 
	data = new int[size]; 
	for(int i = 0; i < size; i++)
	{
		//data[i] = rhs.data[i]; 
		data[i] = rhs[i]; 
	}
	return *this;
}

intArray intArray::operator+(intArray& rhs)
{
	intArray temp(rhs.Size());
	for(int i = 0; i < size; i++)
	{
		temp.data[i] = data[i] + rhs[i];
	}
	return temp;
}

intArray intArray::operator*(intArray& rhs)
{
	intArray temp(rhs.Size());
	for(int i = 0; i < size; i++)
	{
		temp.data[i] = data[i] * rhs[i];
	}
	return temp;
}

ostream& operator<<(ostream& out, intArray& rhs)
{
	for(int i = 0; i < rhs.Size(); i++) 
	{
		out << rhs[i] << " ";
	}
	return out;
}

istream& operator>>(istream&, intArray&)
{
	int num(0);
	for(int i=0; i<rhs.Size();i++)
	{
		in >> num;
		rhs.data[i] = num;
		//out << rhs[i] << " ";
	}
	return out;
}

intArray::~intArray()
{
	delete [] data;
}
//getters can be constant , setters should not be