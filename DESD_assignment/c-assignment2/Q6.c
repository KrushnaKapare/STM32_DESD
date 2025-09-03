#include<stdio.h>

int main()
{
	int num,a,b,c,d,e,temp;
	printf("\nEnter the 5 digit number");
	scanf("%5d",&num);

	int num1 =num;
    e=num%10;
	num=num/10;
	d=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	a=num;

	temp=e*10000;
	temp=temp+d*1000;
	temp=temp+c*100;
	temp=temp+b*10;
	temp=temp+a;
	printf("\n the rev no is %d",temp);


	if (temp == num1)
	{
		printf("\n the number is palidrome");
	}
	else
	{
		printf("\n the number is not palidrome");
	}


  return 0;


}

