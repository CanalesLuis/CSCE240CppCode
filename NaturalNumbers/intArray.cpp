

#include "intArray.h"

intArray::intArray() {
    setSize(0);
    data = NULL;
    cout << "intArray default" << endl;
}

intArray::intArray(int _size) {
    setSize(_size);
    data = new int [size];

    for (int i = 0; i < getSize(); i++) {
        data[i] = 0;
    }
}

intArray::intArray(int _size, int content) {
    setSize(_size);
    data = new int [size];

    for (int i = 0; i < size; i++) {
        data[i] = content;
    }
}


intArray::intArray(const intArray &rhs) {
    setSize(rhs.size);
    data = new int [size];

    for (int i = 0; i < size; i++) {
        data[i] = rhs.data[i];
    }
}

intArray::~intArray() {
    delete [] data;
}

void intArray::setSize(int _size) {
    if(_size >=0) {
        size = _size;
    } else {
        //Do something here. 
    }
}

void intArray::allocData(int _size){
    if(_size >= 0) {
        data = new int [_size];
    }else {
        //Do something appropriate here
    }
}

void intArray::setData(int index, int value) {
    if((index >= 0) && (index < size)) {
        data[index] = value;
    } else {
        //Do something appropriate
    }
}

int intArray::getSize() {
    return size;
}

void intArray::Print() const {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void intArray::PrintSize() const {
    cout << "size: " << size << endl;
}


