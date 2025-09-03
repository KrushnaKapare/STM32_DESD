#include<stdio.h>


int main()
{
	/*


	int num1, num2;
	printf("\nenter two numbers");
	scanf("%d%d",&num1,&num2);

	if(num1> num2)
		printf("\n maximum is %d",num1);
	else
		printf("\n maxiumum is %d",num2);

*/


	int num1,num2;
	printf("\nEnter two numbers");
	scanf("%d%d",&num1,&num2);

	num1>num2 ? printf("\nmaximum number is %d",num1) : printf("\n maximum number is %d",num2);

	return 0;
}
