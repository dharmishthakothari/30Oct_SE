#include<iostream>
using namespace std;
class Person
{
	public:
	string name;
	int c_no;
	void getDetails(string name1,int c_no1)
	{
		name=name1;
		c_no=c_no1;
	}
	void display()
	{
		cout<<name<<"\t"<<c_no<<endl;
	}
};
int main()
{
	
	Person p,p1;	
	p.getDetails("Ami",12345);
	p.display();
	p1.getDetails("Aneri",5555);
	p1.display();
}
