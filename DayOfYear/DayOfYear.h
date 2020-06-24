#include <iostream> 
#include <cstdlib> 

using namespace std; 

class DayOfYear{
	public: 
		DayOfYear(); 
		DayOfYear(int,int); 
		void output(); 
		int getMonth(); 
		int getDay(); 
		
	private:
		int month; 
		int day;
		
		void testDate(); //make this bool. 
};
