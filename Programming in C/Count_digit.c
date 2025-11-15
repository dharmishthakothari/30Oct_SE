#include<stdio.h>
int main()
{
	int num;
	printf("Enter number ");
	scanf("%d",&num);
	int rem,count=0;
	while(num!=0)
	{
		rem=num%10;
		//printf("\n%d",rem);
		count++;
		num=num/10;
	}
	printf("No of digits are %d",count);
}
