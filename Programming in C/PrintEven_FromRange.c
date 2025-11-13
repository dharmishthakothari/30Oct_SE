#include<stdio.h>
int main()
{
	int start_no,end_no,i;
	printf("Enter start number ");
	scanf("%d",&start_no);
	printf("Enter end number ");
	scanf("%d",&end_no);
	
	for(i=start_no;i<=end_no;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
	}
}
