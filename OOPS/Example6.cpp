#include<iostream>
using namespace std;
class Person
{
	public:
	int c_no;
	string name;
	void getDetails()
	{
		cout<<"Enter name and c_no"<<endl;
		cin>>name>>c_no;
	}
	void display()
	{
		cout<<name<<"\t"<<c_no<<endl;
	}
};
class Employee:public Person
{
	public:
	int salary;
	void getSalary()
	{
		cout<<"Enter salary"<<endl;
		cin>>salary;
	}
	void displaySalary()
	{
		cout<<salary<<endl;
	}
};
int main()
{
	Person p;
	p.getDetails();
	p.display();
	
	cout<<"Employee "<<endl;
	Employee e;
	e.getDetails();
	
	e.getSalary();
	
	e.display();
	e.displaySalary();
	
	
}

