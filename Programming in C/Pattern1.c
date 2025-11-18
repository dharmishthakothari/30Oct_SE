#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter number ");
	scanf("%d",&num);
	//for row
	for(i=1;i<=num;i++)
	{
		//for column
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}
