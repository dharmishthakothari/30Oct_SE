#include<stdio.h>
int main()
{
	//array declaration
	int roll_no[20];
	
	//elements initlization 
	roll_no[0]=101;
	roll_no[1]=102;
	roll_no[2]=103;
	roll_no[3]=104;
	printf("%d",roll_no[29]);	
	//second way
	int roll_no1[]={201,202,203};
	printf("\n%d",roll_no1[1]);
}
