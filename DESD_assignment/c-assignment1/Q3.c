#include<stdio.h>
int main()
{
    unsigned char ch;
	printf("\nEnter the character");
	scanf("%c",&ch);

	printf("\nThe ASCII number of charcater %c is %d",ch,ch);
	printf("\nThe octal of charcacter %c is %o",ch,ch);
	printf("\nThe hexal of character %c is %x",ch,ch);
	
	printf("\nThe Character of ASCII number %d is %c",ch,ch);

	return 0;
}
