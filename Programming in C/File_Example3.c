#include<stdio.h>
int main()
{
	FILE* file;
	file=fopen("demo.txt","a");
	char msg[20]="Bhavya is sleeping";
	int i=fputs(msg,file);
	printf("File writtern Successfully ");
	fclose(file);
}
	
