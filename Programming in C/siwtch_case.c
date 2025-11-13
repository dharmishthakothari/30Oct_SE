#include<stdio.h>
int main()
{
	
	int age;
	printf("Enter age ");
	scanf("%d",&age);
	switch(age)
	{
		case 0 ... 2:printf("infant");
					break;
		case 3 ... 18:printf("Minor");
					break;
		case 19 ... 50:printf("Adult");
					break;
		case 51 ... 100:printf("Senior ");
					break;
		default : printf("Enter valid age");
	}
}
