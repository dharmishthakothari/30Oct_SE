//multilication table
#include<stdio.h>
int main()
{
	int num,i,ans;
	printf("Enter number ");
	scanf("%d",&num);
	i=1;
	while(i<=10)
	{
		ans=num*i;
		printf("%d\n",ans);
		i++;
	}
}
