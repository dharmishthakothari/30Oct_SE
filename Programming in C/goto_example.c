#include<stdio.h>
int main()
{
	int num;
	printf("Enter number ");
	scanf("%d",&num);
	if(num==2)
	{
		goto bye;
	}
	bye:		
		printf("\nIn bye lable");
	
	printf("\nEnd of program");
}
