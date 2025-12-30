#include<iostream>
using namespace std;
class Employee
{
	private:
		int salary;
	public:
		int eid,c_no;
		string name,address;
		Employee(int e1,string name1,string add1,int s1,int c1)
		{
			eid=e1;
			name=name1;
			address=add1;
			salary=s1;
			c_no=c1;
		}
		void display()
		{
			cout<<eid<<"\t"<<name<<"\t"<<address<<"\t"<<salary<<"\t"<<c_no<<endl;
		}
		friend int getSalary(Employee e);
};
int getSalary(Employee e)
{
	return e.salary;
}
int main()
{
	Employee e1(101,"test","C G Road",12345,98765);
	e1.display();
	
	e1.display();
	cout<<"Salary from friend function "<<getSalary(e1);
}
