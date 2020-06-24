#include <iostream> 
#include <cstdlib> 
#include "DayOfYear.h"

using namespace std; 

class Holiday{
	public: 
		Holiday(); 
		Holiday(int,int,bool); 
		void output(); 
		
	private:
		DayOfYear date; 
		bool dayOff; 
};
