#include<stdio.h>
int main()
{
  
  int num;
  printf("\nEnter the number to check +ve, -Ve and zero");
  scanf("%d",&num);

  if(num > 0)
	  printf("\n the number %d is positive number",num);
  if(num < 0)
	  printf("\n the number %d is negative number",num);
  else
	  printf("\n the number is zero");

  return 0;	
}

