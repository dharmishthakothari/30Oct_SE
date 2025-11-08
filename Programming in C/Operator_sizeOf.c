#include<stdio.h>
int main()
{
	int num;
	double num1;
	//bool c;
	int sizeInt=sizeof(num);
	printf("%d\n",sizeInt);
	int sizeFloat=sizeof(num1);
	
	printf("%d\n",sizeFloat);
	printf("%d\n",sizeof('c'));
	printf("%d",sizeof(23.45f));
	

}
