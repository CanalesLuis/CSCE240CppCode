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
	//set up streams
    ifstream inFile; //child of istream
    ofstream outFile; //child of ostream
    
	//eifstream inFile(argv[1]);// could do this instead
	
	// a./out input.txt out.txt
	//Usage statement
	if(argc != 3)
	{
		cout << "Usage: ./a.out <input_file> <output_file> " << endl;
		exit(1)
	}
	
    //open files
    //inFile.open("./input.txt"); //has to exist beforehand
	inFile.open(argv[1]);
	
	
	//outFile.open("./out.txt"); //can exist but will be created if not
	//don't hardcode this
	outFile.open(argv[2]);//open to overwrite
	outFile.open(argv[2], ios::app); //open to append
	
	
    //error checking
	if(inFile.fail())
	{
		cout << "Error reading the input file " << endl;
		exit(1);//exist status 1 is an error
	}
    if(outFile.fail())
	{
		cout << "Error reading the output file " << endl;
		exit(1);//exist status 1 is an error
	}
	
    //reading data using >> 
   /* int a,b,c;
	inFile >> a >> b >> c; */
	
	//get only works with characters and not ints
	char next(0), junk(0);
	while(inFile.eof() == false);//eof -end of file // ! inFile.eof
	{
		inFile.get(next);
		//inFile.get(junk);	//
		if(next != ' ')	{
			outFile << next << ",";
		}
	}
	
    //writing data using << 
    //outFile << "First three numbers: " << a << " " < b < " " < c << endl;
	
    //closing files -- flush the buffer
    inFile.close();
	outFile.close();
	
    //TODO:
    //Change up the reading procedure make it less hardcoded
    //Switch over file reading to make it more flexible
    //Open files for appending (ios::app)
    //Open files using the constructor
    //Formatting your output

        
    return 0;
}


/*
ls -l
chmod 777 out.txt

!g++ // to run previous command

./a.out < input.txt
// works but bad pracitce could break easy.

//ifstream c++
cplusplus.com
*/