#include "Holiday.h"



Holiday::Holiday(int m, int d, bool off) : date(m,d), dayOff(off)
{
	
}

Holiday::Holiday() : Holiday(1,1,true)
{
	
}

void Holiday::output()
{
	date.output();
	cout << endl; 
	if(dayOff){
		cout << "Day Off" << endl; 
	}
	else cout << "No Day Off." << endl; 
}
