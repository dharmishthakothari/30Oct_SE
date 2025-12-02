#include<stdio.h>
int addition(int n,int n1)
{
	return n+n1;
}
int main()
{
	int num1,num2;
	printf("Enter 2 numbers ");
	scanf("%d%d",&num1,&num2);
	int ans;
	ans=addition(num1,num2);
	printf("%d",ans);
}
