#include<iostream>
using namespace std;
void greet1()
{
	cout<<"Happy weekend"<<endl;
}
inline void greet()
{
	cout<<"Good Morning"<<endl;
}
int main()
{
	greet();
	greet1();
}
