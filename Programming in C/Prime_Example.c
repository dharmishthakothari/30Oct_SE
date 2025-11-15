#include<stdio.h>
int main()
{
	int num,i,temp=0;
	printf("Enter number");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			//printf("Number is not prime\n");
			temp=0;
			break;
		}else
		{
			temp=1;
			//printf("Number is prime\n")			;
		}
	}
	if(temp==0)
	{
		printf("Number is not prime\n");
	}
	else
	{
		printf("Number is prime\n");
	}
	
	
	
}
