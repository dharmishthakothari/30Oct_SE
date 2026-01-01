#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream file("Example12.cpp");
	string data;
	while(!file.eof())
	{
		file>>data;
		cout<<data;
	}
}
