#include<iostream>
using namespace std;
class Person
{
	private:
		int c_no;
	
	public:
				string name;
		Person(string name1,int cno)
		{
			name=name1;
			c_no=cno;
		}
		void display()
		{
			cout<<name<<endl;
		}
	
		friend void displayC_no(Person p);
};
void displayC_no(Person p)
{
	cout<<p.c_no;
}
int main()
{
	Person p("test",345678);	
	p.display();
	displayC_no(p);
	
}
