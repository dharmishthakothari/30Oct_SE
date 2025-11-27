#include<stdio.h>
// creating function Print table of number
void print_table(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",n,i,n*i);
	}
}
int main()
{
	int n;
	printf("Enter number ");
	scanf("%d",&n);
	print_table(n);
}

