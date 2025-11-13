#include<stdio.h>
int main()
{
	//break a loop when iteration value is 5
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==7)
		{
			break;
		}
		printf("\n%d",i);
	}
}
