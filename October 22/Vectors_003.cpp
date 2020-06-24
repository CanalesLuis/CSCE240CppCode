/*
 * Basic formal file I/O
 * 
 * To run: 
 * g++ main.cpp
 * ./a.out 1000bp.txt out.txt
 * 
 * */

#include <cstdlib>
#include <iostream>
#include <fstream> //must include this now
#include <string>


using namespace std;
/*
 * 
 */
int main(int argc, char** argv) 
{
	//initialization
	
	//vector<type> name;
	vector<int> vect{1,2,3,4,5};
	vector<int> vect1;
	vector<int> vect2(5, 10);
	
	//.size()
	cout << vect.size() << endl;
	
	//Printing element: reg for, foreach
	for(int num : vect)
	{
		cout << num << " ";
	}
	cout << endl;
	
	for(int i=0;i<vect.size();i++)
	{
		cout << vect[i] << " ";
	}
	cout << endl;
	
	//Accessing elements [], .front(), .back()
	cout << vect[0] << endl;
	cout << vect.front() << endl;
	
	//Adding elements to the end push_back()
	vect.push_back(20);
	
	//Deleting elements from end pop_back()
	vect.pop_back();
	
	//iterators (for loop)
	//vect.begin()
	//vect.end()
	for(auto i = vect.begin();i != vect.end(); i++)// auto is new to auto set it, auto = iterator here
	{
		cout << *i << " ";
	}
	cout << endl;
	
	//inserting elements insert(iterator+offset, value)
	vect.insert(vect.begin(), 100); //insert to beginning
	vect.insert(vect.begin()+3, 100);
	
	//inserting elements erase(iterator+offset) || erase(iterator+offset, iterator+ offset+i);
	vect.erase(vect.begin());
	vect.erase(vect.begin()+2);
	
	vect.erase(vect.begin()+3, vect.begin()+4);
	
	
	//2d vector
	
	vector<vector<int>> v2d { { 1,2,3 },
								{4,5,6} };
	
	for{int i = 0; i< v2d.size(); i++)
	{
		for(int j = 0; j< v2d[i].size(); j++)
		{
			cout << v2d[i][j] << " ";
		}
		cout << endl;
	}
	
	for(vector<int> v : v2d)
	{
		for(int i :  v)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	
    return 0;
}





