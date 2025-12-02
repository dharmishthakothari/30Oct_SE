#include<stdio.h>
int celsius_to_fahrenheit(int celsius)
{
	int fahreheit;
	fahreheit=(celsius * 9/5)+32;
	return fahreheit;
}
int fahreheit_to_celsius(int fah)
{
	int celsius;
	celsius=(fah-32) * 5/9;
	return celsius;
}
int main()
{
	int choice;
	printf("\n1. Fahreheit to Celsius");
	printf("\n2. Celsius to Fahrenheit");
	printf("\n Enter Choice ");
	scanf("%d",&choice);
	int fah,cel;
	if(choice==1)
	{
		printf("Enter Fahrenheit");
		scanf("%d",&fah);
		int ans=fahreheit_to_celsius(fah);
		printf("\n\nCelsius = %d",ans);
	}else if(choice==2)
	{
		printf("Enter Celcsius ");
		scanf("%d",&cel);
		//int ans=celsius_to_fahrenheit(cel);
		printf("\n\nFahrenheit = %d",celsius_to_fahrenheit(cel));
		
	}
}
