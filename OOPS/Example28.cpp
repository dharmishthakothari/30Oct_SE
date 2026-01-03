#include<iostream>
using namespace std;
class Employee
{
	public :
	static int countEmp;
	string name;
	int c_no;
	Employee(string name,int c_no)
	{
		countEmp++;
		this->name=name;
		this->c_no=c_no;
	}
	void display()
	{
		cout<<name<<"\t"<<c_no<<endl;
	}
};
int Employee::countEmp=0;

int main()
{
	Employee e1("dharmishtha",2345);
	Employee e2("Ami",56789);
	Employee e3("dharmishtha",2345);
	Employee e4("Ami",56789);
	
	cout<<"No of Employees are "<<Employee::countEmp;
	
}
