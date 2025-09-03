#include<stdio.h>
int main()
{
 
	int num1;

	printf("\nEnter the number");
	scanf("%d",&num1);

	if(num1 % 2== 0)
		printf("\n the number %d is even number",num1);
	else
		printf("\n the number %d is odd number",num1);
	 
	return 0;
 
}
