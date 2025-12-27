#include<iostream>
using namespace std;
class Shape
{
	public :
	virtual int calculateArea()
	{
		return 0;		
	}	
};
class Rectangle:public Shape
{
	public:
	int l=8,w=2;
	int calculateArea()
	{
		return l*w;
	}
};
int main()
{
	Shape *s;
	Rectangle r;
	
	s=&r;
	cout<<"Shape Area "<<s->calculateArea()<<endl;
	cout<<"Rectangle area "<<r.calculateArea()<<endl;
	
	
}
