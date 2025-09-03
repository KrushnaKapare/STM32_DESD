#include<stdio.h>

int main()
{
	int num;
	char ch;
	int i=1;

	printf("\n enter the number and charcter");
	scanf("%d %c",&num,&ch);
	
	while (i<=num)
	{
		printf("%c ",ch);
		i++;
	}

	return 0;
}

