#include<stdio.h>
int main()
{
	int num,a,b,c,d;
	printf("Enter 4 digit no\n");
	scanf("%d",&num);

	d=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	a=num;
	

	printf("\nFace value");
	printf("\n %d  %d  %d  %d",a,b,c,d);

	printf("\nplace value");
	printf("\n%d\t%d\t%d\t%d",a*1000,b*100,c*10,d);


	printf("\nReverese number");
	printf("\n %d%d%d%d",d,c,b,a);

	return 0;
}




