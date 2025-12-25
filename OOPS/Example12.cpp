#include<iostream>
using namespace std;
class Point
{
	public:
	int x,y;
	
	Point(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	void display()
	{
		cout<<x<<" : "<<y<<endl;
	}
	Point operator +(Point other)
	{
		Point ans(0,0);
		ans.x=x+other.x;
		ans.y=y+other.y;
		return ans;		
	}
	Point operator *(Point other)
	{
		Point ans(0,0);
		ans.x=x*other.x;
		ans.y=y*other.y;
		return ans;		
	}
	bool operator <=(Point other)
	{
		if(x<=other.x)
		{
			return 1;
		}
		return 0;
	}
};
int main()
{
	Point p1(1,7);
	Point p2(22,78);
	p1.display();
	p2.display();
	
	Point p3(0,0);
	
	p3=p1+p2;
	p3.display();
	
	if(p1<=p2)
	{
		cout<<"P1 is smaller ";
	}else
		cout<<"P2 is smaller ";
}
