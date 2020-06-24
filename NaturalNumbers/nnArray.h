

#ifndef NNARRAY_H
#define NNARRAY_H
#include "intArray.h"

//class subclass : access_mode base_class
//access_modes: 
	//Public : public members of base become public member in subclass
	//         protected member of base become protected members in subclass
	//Protected : public/protected members in base become protected members in subclass
	//Private : public/protected members become private
class nnArray : public intArray {
public:
    nnArray();
    nnArray(int); 
    nnArray(int _size, int content);
    nnArray(const nnArray& orig);
    ~nnArray();

    void setData(int index, int value); //this will need to be modified to disallow negatives
private:
	bool test();
};

#endif /* NNARRAY_H */

