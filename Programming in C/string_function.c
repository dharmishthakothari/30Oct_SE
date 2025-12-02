#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter name ");
	scanf("%s",name);
	int i=strlen(name);
	printf("%s is having %d letter ",name,i);
	//copy name to name1
	char name1[20];
	strcpy(name1, name);
	printf("\n\nCopied string :  %s ",name1);
	// name and surname 
	char surname[40];
	printf("\nEnter Surname ");
	scanf("%s",surname);
	//char[40] fullname;
	strcat(surname, name);
	printf("\n\nAfter concate string is %s",surname);
	printf("\n Lenght of full name %d",strlen(surname));
	

}
