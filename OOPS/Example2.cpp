
#include<iostream>
using namespace std;
int main()
{
	//2x2 matrix
	int arr[2][2],arr1[2][2],ans[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter element ";
			cin>>arr[i][j];
			cout<<"Enter elemt from array 2 ";
			cin>>arr1[i][j];			
		}
	}
	//For display
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j]<<"\t";		
		}
		cout<<endl;		
	}
	cout<<"SECOND ARRAY"<<endl;
	
	//second array
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr1[i][j]<<"\t";		
		}
		cout<<endl;		
	}
	//adddition of 2 arrays 
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			ans[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	cout<<"ANSWER"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<ans[i][j]<<"\t";		
		}
		cout<<endl;		
	}
	
}

	
	
