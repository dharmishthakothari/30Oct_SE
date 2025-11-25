#include<stdio.h>
int main()
{
	int matrix[2][4];
	int i,j;
	//initlize array value
	matrix[0][0]=201;
	matrix[0][1]=901;
	matrix[0][2]=999;
	matrix[0][3]=67;
	
	matrix[1][0]=500;
	matrix[1][1]=300;
	matrix[1][2]=600;
	matrix[1][3]=800;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t%d",matrix[i][j]);
		}
		printf("\n");
	}
}
	
