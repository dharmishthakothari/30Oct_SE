#include<stdio.h>
int main()
{
	int num,i,temp=0,j;

for(j=1;j<=100;j++)
{
	for(i=2;i<j;i++)
	{
		if(j%i==0)
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
		printf("%d Number is not prime\n",j);
	}
	else
	{
		printf("%d Number is prime\n",j);
	}
	
}
	
}
