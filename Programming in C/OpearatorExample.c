#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter num1 and num2 ");
	scanf("%d%d",&num1,&num2);
	int ans=num1+num2;
	printf("Addition = %d\n",ans);
	int ans_sub=num1-num2;
	printf("Substraction = %d\n",ans_sub);
	int ans_div=num1/num2;
	printf("Division = %d\n",ans_div);
	int ans_mul=num1*num2;
	printf("Multilication = %d\n",ans_mul);
	int ans_mod=num1%num2;
	printf("Modulus = %d",ans_mod);
}
