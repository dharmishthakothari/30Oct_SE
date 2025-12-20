#include<iostream>
using namespace std;
class Vehical
{
	public:
		void start()
		{
			cout<<"We are starting Vehical"<<endl;
		}		
};
class Car : public Vehical
{
	public:
		void drive()
		{
			cout<<"We can drive a car "<<endl;
		}
};
int main()
{
	Car c;
	c.start();
	c.drive();
	
	Vehical v;
	v.start();
}

	
