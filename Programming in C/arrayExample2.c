#include<stdio.h>
int main()
{
//	float tempreture[]={12.23f,23.56f,11.34f};
//	int i;
//	for(i=0;i<3;i++)
//	{
//		printf("\n%f",tempreture[i]);
//	}
	float tempreture[10];
	int i,num;
	printf("Enter number of elements ");
	scanf("%d",&num);
	//user value insert
	for(i=0;i<num;i++)
	{
		printf("Enter tempreture ");
		scanf("%f",&tempreture[i]);
	}
	//for display 
	for(i=0;i<num;i++)
	{
		printf("\n%0.2f",tempreture[i]);
	}
	

}
