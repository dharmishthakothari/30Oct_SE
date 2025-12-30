#include<iostream>
using namespace std;
class Employee
{
	private:
		int salary=0;
	public:
	
		string name,address;
		Employee()
		{
			
		}
		Employee(string name)
		{
			this->name=name;
		}
		Employee(string name,int salary)
		{
			this->name=name;
			this->salary=salary;
		}
		Employee(string name,string address,int salary)
		{
			this->name=name;
			this->address=address;			
			this->salary=salary;
		}
		void display()
		{
			this->display1();
			cout<<"\t"<<name<<"\t"<<address<<"\t"<<salary<<"\t"<<endl;
		}
		void display1()
		{
			cout<<"Calling ";
		}
};
int main()
{
	Employee e2("Umang");
	Employee e3("Ami",90909);
	Employee e1("Bhavya","C G Road",23456);
	e2.display();
	e3.display();
	e1.display();
}
