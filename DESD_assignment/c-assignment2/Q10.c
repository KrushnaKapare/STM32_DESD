#include<stdio.h>
int main()
{
	char c;
	printf("\n enter the value:");
	scanf("%c",&c);

	if(c >= 65 && c <= 90 || c >= 97 && c <=122)
	{
		printf("\n c is a alphabet");
	
	 if(c >= 65 && c <=90 )
	{
		printf("\n c is an uppercase letter");
	}
	else if(c >=97 && c <= 122)
 	{
		printf("\n c is an lower case letter ");
	}
	}
	else if (c >= 48 && c <= 57)
	{
		printf("\n c is digit");
	}
	
	else if(c == '\n')
	{
		printf("\n c is new line");
	}
   else if(c == '\t')
   {
	   printf("\n c is tab");
	}
	else if(c== '\r')
	{
		printf("\n c is carriage return ");
	}
	else if(c == ' ')
	{
		printf("c is space");
	}
	else
	{
		printf(" other ");
	}
	return 0;
}

