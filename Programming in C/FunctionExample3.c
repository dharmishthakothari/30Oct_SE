/* FUNCTIONs - task , user input,print,power,upper,concate 
User defined   - we are creating -  main
in build - already library  , printf,scanf

*/
//return_type function_name(paramter)
//{
//	logic
//}
//function implement/create 
int addition(int n,int n1)
{
	int ans=n+n1;
	return ans;
}
void multiplication(int n,int n1)
{
	int ans=n*n1;
	printf("\n\nMultilcation %d",ans);
}
int checkEven(int no)
{
	if(no%2==0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int val1=1080,val2=200,val3=200;
	//accept numbers from users 
	
	//calling
	
	printf("\n\n23 = %d",checkEven(23));
	int a=checkEven(23);
	if(a==1)
	{
		prime
	}
	printf("\n\n22 = %d",checkEven(22));
	int choice ,number1,number2;
	do
	{
		printf("\n1. Addition ");
		printf("\n2. Muliplication ");
		printf("\n3. Division ");
		printf("\n4. Substrction ");
		printf("\n5. Average ");
		printf("\n6. Exit ");
		printf("\nEnter your Choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter 2 values");
					scanf("%d%d",&number1,&number2);
					int ans=addition(number1,number2);
					printf("\nAddition is %d",ans);
					break;
			case 2:printf("Enter 2 values");
					scanf("%d%d",&number1,&number2);
					multiplication(number1,number2);
					break;
			case 5: printf("Enter 2 values");
					scanf("%d%d",&number1,&number2);
					ans=addition(number1,number2);
					float avg=(float)ans/2;
					printf("%f",avg);
			case 6:break;
			default : printf("\n\nPlease enter valid choice ");
		}
	}while(choice!=6);
	
}

