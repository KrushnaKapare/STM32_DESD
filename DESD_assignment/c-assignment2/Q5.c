#include<stdio.h>

int main()
{
  /*
	int num1,num2,num3;
	printf("\nenter three numbers");
	scanf("%d%d%d",&num1,&num2,&num3);

	if(num1>num2)
		{
			if(num1>num3)
			{
				printf("\n the number1 %d greater ",num1);

			}
		}

	else if(num2>num1)
	{
		if(num2>num3)
		{
		printf("\nthe number2 %d greater",num2);
		
		}}
			else
				printf("\n number333 is %d greater",num3);
  */

	int n1,n2,n3,num;
	printf("\nEnter three numbers");
	scanf("%d%d%d",&n1,&n2,&n3);

	num=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
			printf("\n max number is %d",num);

	return 0;
}

