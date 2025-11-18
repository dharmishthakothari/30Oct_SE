#include<stdio.h>
int main()
{
	int choice,num1,num2;
	do
	{
		printf("\n\n\n\n1. Addition\n2. Subtraction\n3.Multiplication\n4.Division\n5.Exit");
		printf("\n\nEnter your choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nEnter 2 numbers ");
			
				scanf("%d%d",&num1,&num2);
				printf("\nAddition of 2 numbers is %d ",num1+num2);
				break;
			case 2:printf("\nEnter 2 numbers ");
			
				scanf("%d%d",&num1,&num2);
				printf("\nSubstraction of 2 numbers is %d ",num1-num2);
				break;
			case 5:printf("\nBye....");
				break;
			default:
					printf("\nPlease enter valid choice");
			
		}
		
	}while(choice!=5);
}
