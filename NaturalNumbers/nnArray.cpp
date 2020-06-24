

#include "nnArray.h"

nnArray::nnArray() : intArray() {
	cout << "nnArray default" << endl;
	test = true;
}

nnArray::nnArray(int _size, int content) : intArray() {

    if (content >= 0) {
        setSize(_size);
        allocData(_size);
        for (int i = 0; i < _size; i++) {
            setData(i, content);
        }
    } else {
        cout << "Natural numbers can't be negative." << endl;
        cout << "The default constructor has been invoked." << endl;
    }
}

nnArray::nnArray(int _size) : intArray(_size)
{
	
}

nnArray::nnArray(const nnArray& orig) {
}

nnArray::~nnArray() {
}

