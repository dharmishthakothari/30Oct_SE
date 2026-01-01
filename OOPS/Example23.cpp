#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	//read data from file --ifstream
	//write data into file --ofstream 
	ifstream  file("Example12.cpp");
	string data;
	//getline is method thru i read whole line from file
	while(getline(file,data))
	{
		cout<<data<<endl;
	}
	
}
