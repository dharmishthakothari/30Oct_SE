#include<stdio.h>
int main()
{
	int age,weight;
	printf("Enter age ");
	scanf("%d",&age);
	printf("Enter weight ");
	scanf("%d",&weight);	
	if(age>18)
	{
		if(weight>50)
		{
			printf("You can donate blood");
		}
		else
		{
			printf("You are underweight to donate blood");
		}
	}else
	{
		printf("You are not adult so count not donate blood");
	}
}
