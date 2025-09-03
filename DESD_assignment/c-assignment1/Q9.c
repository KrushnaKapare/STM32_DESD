#include<stdio.h>
int main ()
{
    int temp;
	float f,c;
	printf("\n enter temp to convert in farenhite");
	scanf("%d",&temp);
		f =(( 9.0/5) * temp) + 32;
	printf("\n the temp in fernhite is %f\\n ",f);

    c =(5.0/9)*(f-32);
	printf("\nthe temp in degree celcius is %.2f",c);


	
	return 0;
}

