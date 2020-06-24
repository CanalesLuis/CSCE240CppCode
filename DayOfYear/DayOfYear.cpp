#include "DayOfYear.h"

DayOfYear::DayOfYear() : month(1), day(1) //DayOfYear(1,1)
{
	testDate();
}

DayOfYear::DayOfYear(int m,int d) : month(m), day(d)
{
	testDate();
}  
 
void DayOfYear::output()
{
	switch(month){
		case 1:
			cout << "January"; break;
		case 2:
			cout << "Febuary"; break;
		case 3:
			cout << "March"; break;
		case 4:
			cout << "April"; break;
		case 5:
			cout << "May"; break;
		case 6:
			cout << "June"; break;
		case 7:
			cout << "July"; break;
		case 8:
			cout << "August"; break;
		case 9:
			cout << "September"; break;
		case 10:
			cout << "October"; break;
		case 11:
			cout << "November"; break;
		case 12:
			cout << "December"; break;
		default:
			cout << "Error in month" << endl; 
	}
	cout << day << endl;
}

int DayOfYear::getMonth()
{
	return month;
} 

int DayOfYear::getDay()
{
	return day;
}

void DayOfYear::testDate()
{
	if(month > 12 || month < 1)
	{
		cout << "Error in Month" << endl;
	}
	if(day > 32) 
	{
		cout << "Error in Day" << endl;
	}
}
