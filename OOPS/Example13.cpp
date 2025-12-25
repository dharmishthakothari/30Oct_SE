#include<iostream>
using namespace std;
class Distance
{
	public:
	int x,y;
	Distance()
	{
		
	}
	void get()
	{
		cin>>x>>y;
	}
	
	void display()
	{
		cout<<x<<" : "<<y<<endl;
	}
	Distance operator +(Distance other)
	{
		Distance ans;
		ans.x=x+other.x;
		ans.y=y+other.y;
		return ans;		
	}
	Distance operator *(Distance other)
	{
		Distance ans;
		ans.x=x*other.x;
		ans.y=y*other.y;
		return ans;		
	}
	bool operator <=(Distance other)
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
	Distance p1;
	Distance p2;
	p1.get();
	p2.get();
	p1.display();
	p2.display();
	
	Distance p3;
	
	p3=p1+p2;
	p3.display();
	
	if(p1<=p2)
	{
		cout<<"P1 is smaller ";
	}else
		cout<<"P2 is smaller ";
}
