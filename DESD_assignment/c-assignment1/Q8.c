#include<stdio.h>
int main ()
{

    int num1,num2,num3;
	float avg;
	printf("\nEnter three numbers to find average");
	scanf("%d%d%d",&num1,&num2,&num3);

	avg=(num1+num2+num3)/3.0;

	printf("\naverage of three numbers is %.3f",avg);

	return 0;
}

