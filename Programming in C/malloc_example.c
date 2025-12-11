#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int *a;
	int num;

	
	printf("Enter no of elements ");
	scanf("%d",&num);
	a=malloc(num*sizeof(int));
	int i;
	for(i=0;i<num;i++)
	{
		a[i]=12*i;
		printf("\n%d",a[i]);
	}
	
		//a=(int*)malloc(no_of_elements*sizeof(int));

}
