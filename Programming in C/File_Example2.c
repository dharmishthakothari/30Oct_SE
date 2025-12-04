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
	int i;
	//i=getc(file);
	while(i!=EOF)
	{
		i=getc(file);
		printf("%c",i);		
	}
	fclose(file);
}
	
	
