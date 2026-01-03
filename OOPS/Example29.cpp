#include<iostream>
using namespace std;
int fact_rec(int number)
{
	int ans=1;

	ans=fact_rec(number)*1;
	return ans;
	

		
	
}
int factorial(int number)
{
	int fact=1;
	for(int i=number;i>=1;i--)
	{
		fact=fact*i;
	}
//	for(int i=1;i<=number;i++)

//	{
//		fact=fact*i;
//	}
	return fact;
}
int main()
{
	cout<<fact_rec(5)<<endl;
}
