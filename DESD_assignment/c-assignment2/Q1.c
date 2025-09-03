#include<stdio.h>
int main()
{

	int num1, num2;
	float div;
	printf("\nenter two numbers for divison");
	scanf("%d%d",&num1,&num2);

	if(num2==0)
		printf("\n Can't divide by zero");
	else
	{
		div=num1/num2;
		printf("\nthe divison of two numbers is %.2f",div);
	}

 return 0;

}
