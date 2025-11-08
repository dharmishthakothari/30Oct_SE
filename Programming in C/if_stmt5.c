//example if-elseif
#include<stdio.h>
int main()
{
	int num;
	printf("Enter number ");
	scanf("%d",&num);	
	if(num>0)
	{
		printf("Number is Positive ");		
	}else if(num<0)
	{
		printf("Number is Nagative");
	}else
		printf("number is zero ");
}
