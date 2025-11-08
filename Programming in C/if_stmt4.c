#include<stdio.h>
int main()
{
	int age;
	printf("Enter age ");
	scanf("%d",&age);
	if(age>0 && age<=100)
	{
		printf("It's valid age ");
	}
	else
	{
		printf("Invalid age ");
	}
}
