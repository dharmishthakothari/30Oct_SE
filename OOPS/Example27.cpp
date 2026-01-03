#include<iostream>
using namespace std;
void checkStatic()
{
	static int i=0;
	int j=0;
	i++;
	j++;
	cout<<i<<"\t"<<j<<endl;	
}
int main()
{
	checkStatic();
	checkStatic();	
	checkStatic();
	checkStatic();	

	
	
}
