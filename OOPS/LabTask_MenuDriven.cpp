#include<iostream>
using namespace std;
class Phone
{
	public :
		string brand,model;
		int price;
		Phone()
		{
			
		}
	Phone(string brand1,string model1,int price1)
	{
		brand=brand1;
		model=model1;
		price=price1;
	}
	void display()
	{
		cout<<brand<<"\t"<<model<<"\t"<<price<<endl;
	}
		
};
int main()
{
	int choice;
	Phone p[10];
	string model,brand,search;
	int price;
	int k=0;
do
	{
		cout<<"1. Add Phone"<<endl;
		cout<<"2. View All"<<endl;
		cout<<"3. Search Phone"<<endl;
		cout<<"4.Exit "<<endl;
		cout<<"Please enter your Choice "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1 : cout<<"Enter brand model and price of phone "<<endl;
					cin>>brand>>model>>price;	
					p[k]=Phone(brand,model,price);
					k++;
					break;
			case 2:
					for(int j=0;j<k;j++)
						p[j].display();
					break;
			case 3:
					cout<<"Enter brand name "<<endl;
					cin>>search;
					for(int j=0;j<k;j++)
					{
						if(search==p[j].brand)
						{
							p[j].display();
						}
					}
			case 4:break;
		}
		
	}while(choice!=4);
	
}
