//Multiple
#include<iostream>
using namespace std;
class A
{
	public :
		void displayA()
		{
			cout<<"In A "<<endl;
		}
};
class B
{
	public :
		void displayB()
		{
			cout<<"In B"<<endl;
		}
		
};
class C : public A,public B
{
	public:
		void displayC()
		{
				cout<<"in C"<<endl;
		}
};
int main()
{
	cout<<"Object of A"<<endl;
	A objA;
	objA.displayA();
	cout<<"Object of B"<<endl;
	B objB;
//	objB.displayA();
	objB.displayB();
	
	cout<<"Object of C"<<endl;
	C objC;
	objC.displayA();
	objC.displayB();
	objC.displayC();
	
}
