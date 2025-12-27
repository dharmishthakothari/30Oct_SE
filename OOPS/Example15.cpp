#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual int calculateArea()=0;
		
};
class Rectangle :public Shape
{
	public :
		int l=2,w=10;
		int calculateArea()
		{
			return l*w;
		}
};
int main()
{
	//Shape s;
	Rectangle r;
	cout<<r.calculateArea();
}
