#include<stdio.h>
int main()
{
	int number;
	printf("Enter number ");
	scanf("%d",&number);
	int array[number];
	int j;
	for(j=0;j<number;j++)
	{
		printf("Enter element ");
		scanf("%d",&array[j]);
	}
	
	for(j=0;j<number;j++)
	{
		printf("\n%d",array[j]);
	}
	//Search element 
	
	int searchElement,temp;
	printf("\n\n\nEnter element you want to search ");
	scanf("%d",&searchElement);
	for(j=0;j<number;j++)
	{
		if(searchElement==array[j])
		{
			temp=1;
			break;
		}
		else
		{
			temp=0;
			//printf("\n\nElement doesn't exist");
		}
	}
	if(temp==1)
	{
		printf("\n\nElement exist");
	}else
	{
		printf("\n\nElement doesn't exist");
	}
	
}
