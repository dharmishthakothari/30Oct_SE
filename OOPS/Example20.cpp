#include<iostream>
using namespace std;
class A
{
	private:
	int x=200;	
	friend class B;
};
class B
{
	public:
		int z=300;
		void displayX(A obj)
		{
			cout<<obj.x<<"\t"<<z;
		}		
};
int main()
{
	A aObj;
	
	B obj;
	obj.displayX(aObj);
}
