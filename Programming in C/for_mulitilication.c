//multilication table using for loop 
#include<stdio.h>
int main()
{
	int num,i,ans;
	printf("Enter number ");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		//5 * 1 =5
		//5 * 2 =10 
		ans=num*i;
		printf("\n%d * %d = %d",num,i,ans);
	}
	
}
