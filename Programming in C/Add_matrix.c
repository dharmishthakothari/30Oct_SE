#include<stdio.h>
int main()
{
	int matrix1[2][2];
	int
	 matrix2[2][2];
	int ans[2][2];
	int i,j;
	//first Matrix
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter element ");
			scanf("%d",&matrix1[i][j]);
		}
	}
	//For second matrix
	printf("\nEnter elements for Second matrix ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter element ");
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	//For add matrix
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			ans[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	
	printf("\n\nFirst Matrix\n\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",matrix1[i][j]);
		}
		printf("\n");
	}
	//For Display matrix 2
	printf("\n\nSecond Matrix\n\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",matrix2[i][j]);
		}
		printf("\n");
	}
	
	//For display ans
	printf("\n\nAnswer Matrix\n\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",ans[i][j]);
		}
		printf("\n");
	}
	
	
}
