#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	
	ofstream file1("test.txt");
	file1<<"Today is 1st Jan"<<endl;
	file1<<"Happy New Year"<<endl;
	file1.close();
	ifstream file2("test.txt");
	string data;
	//space -whitespace character 
	file2>>data;
	cout<<data;
	
	file2>>data;
	cout<<data;
	
	file2>>data;
	cout<<data;
	
	file2>>data;
	cout<<data;
	
}
