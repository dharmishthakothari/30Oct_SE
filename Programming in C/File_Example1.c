#include<stdio.h>
int main()
{
	FILE* file;
	file=fopen("if_stmt.c","r");
	//file=fopen("C:\\Users\\Admin\\Downloads\\SQL_8-9.txt","r");
	if(!file)
	{
		printf("File Does not Exist ");
		return 1;
	}
	char msg[10];
	//printf("**** %s",fgets(msg,12,file));
	//char msg1[20];
	while(fgets(msg,10,file))
	{
		//fgets(msg,20,file);
		printf("%s",msg);
	}
	
	
}
