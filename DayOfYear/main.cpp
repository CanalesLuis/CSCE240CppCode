/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Main driver for Account object
 * 
 * Copyright (C) 2019 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/
 
#include <cstdlib>
#include <iostream>
#include "Holiday.h"


int main(int argc, char** argv) {
	
	Holiday h(12,25,true); 
	h.output();
	cout << "____________________________________" << endl; 
	Holiday h2(10,14,false); //columbus day
	h2.output();
	cout << "____________________________________" << endl; 
	Holiday h3(13,33,true); 
	h3.output();
	
    return 0;
}
