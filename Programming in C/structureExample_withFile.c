#include<stdio.h>

struct Employee
{
	int id;
	char name[20],designation[20],department[20];
	int salary;
};

int main()
{
	struct Employee e1[5];	
	int i;
	for(i=0;i<2;i++)
	{
	
		printf("Enter employee id ");
		scanf("%d",&e1[i].id);
	
		printf("Enter employee salary ");
		scanf("%d",&e1[i].salary);
	
		char name[20],dept[20],des[20];
		printf("Enter name ");
		scanf("%s",name);
	
		printf("Enter Department");
		scanf("%s",dept);
	
		printf("Enter designation");
		scanf("%s",des);
	
		strcpy(e1[i].name,name);
		strcpy(e1[i].department,dept);
		strcpy(e1[i].designation,des);
	
	
//	e1.id=203;
//	e1.salary=23000;
//	strcpy(e1.name,"poiuy");
//	strcpy(e1.department,"Sales");
//	strcpy(e1.designation,"Manager");
		
	}	
	FILE *file;
	file=fopen("Employee.txt","a");

	for(i=0;i<2;i++)
	{
		printf("\n\n%d %s %d %s %s",e1[i].id,e1[i].name,e1[i].salary,e1[i].department,e1[i].designation);
		char line[50]="";
//		strcat(line,e1[i].name);
//		strcat(line,e1[i].department);
//		strcat(line,e1[i].designation);

		fprintf(file,line);
		fprintf(file,"\n\n__________________________\n\n");
	}
	
	fclose(file);
	
	
	
}
