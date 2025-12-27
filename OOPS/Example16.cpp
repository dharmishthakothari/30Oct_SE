#include<iostream>
using namespace std;
class Person
{
	private:
	int c_no;
	string name;
	public:
	int getC_no()
	{
		return c_no;
	}
	void setC_no(int c1)
	{
		c_no=c1;
	}
	void display()
	{
		cout<<name<<c_no<<endl;
	}
};
int main()
{
	Person p;
	p.setC_no(234234);
	//p.name="dharmishtha";
	p.display();
}
