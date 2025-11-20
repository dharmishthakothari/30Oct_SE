#include<stdio.h>
int main()
{
	int numbers[10];
	int num,i;
	printf("Enter no of elements ");
	scanf("%d",&num);
	int sum=0;
	for(i=0;i<num;i++)
	{
		printf("Enter elements ");
		scanf("%d",&numbers[i]);
		if(numbers[i]%2==0)
		{
		
			sum=sum+numbers[i];
		}
	}
	for(i=0;i<num;i++)
	{
		printf("\n%d",numbers[i]);		
	}
	printf("\n\n\nAddition of numbers is %d",sum);
}
