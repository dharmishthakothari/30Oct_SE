#include<iostream>
using namespace std;
class Book
{
public:
	
	int isbn,price;
	string auther,title;
	Book()
	{
		
	}
	Book(int isbn1,string author1,string title1,int price1)
	{
		isbn=isbn1;
		auther=author1;
		title=title1;
		price=price1;		
	} 
	void display()                  
	{
		cout<<isbn<<"\t"<<auther<<"\t"<<title<<"\t"<<price<<endl;
	}
};
int main()
{
//	Book b(123,"Robin Sharma","Focus",250);
//	b.display();
//	Book b1(345,"Stephen","Motivation",200);
//	b1.display();
	int no_of_books;
	cout<<"Enter number of books ";
	cin>>no_of_books;
	
	Book b[no_of_books];
	for(int i=0;i<no_of_books;i++)
	{
		cout<<"Enter ISBN  ";
		cin>>b[i].isbn;
		cout<<"Enter price ";
		cin>>b[i].price;
		
		cout<<"Enter title ";
		cin>>b[i].title;
		
		cout<<"Enter author ";
		cin>>b[i].auther;
	
}
int total;
	for(int i=0;i<no_of_books;i++)
	{
		b[i].display();
		total=total+b[i].price;
	}
	cout<<"Total price "<<total;
}
