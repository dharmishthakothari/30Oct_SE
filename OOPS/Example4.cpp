#include<iostream>
using namespace std;
class Person
{
	public:
	string name;
	int c_no;
	Person(string name1,int c_no1)
	{
		name=name1;
		c_no=c_no1;
	}
	void display()
	{
		cout<<name<<"\t"<<c_no<<endl;
	}
	~Person()
	{
		cout<<"In Destructor"<<endl;
	}
	
};
int main()
{
	
	Person p("Ami",12345),p1("Aneri",22222);	
	p.display();

	p1.display();
}
