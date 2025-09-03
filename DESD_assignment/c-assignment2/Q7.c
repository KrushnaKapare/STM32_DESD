#include<stdio.h>
int main()
{

	int year;
	printf("enter the year \n");
	scanf("%4d",&year);

	/*

	if(year% 400 == 0)
	{
	
		
			printf("\n year is leap year \n Days in year is 366");
		
	}
	else{
		if(year%100==0){
		printf("\n it is not leap year\n days in year is 365");
	
		}else {if(year%4==0)
		{
			printf("leap year no of days 366");
		}else { printf("\nnot a leap year no of days 365");} }
	}

*/


/*
	if((year %400==0)||(year %4 ==0 && year %100!=0 ) )
	{
		
		printf("\n its a leap year \n days in leap year are 366");
	}
      else{
	printf	("its not a leap year \n days in not leap year are 365");
		}


*/
    int days
    days = ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) ? 366 : 365;

	printf("\n year %d has %d days",year,days);

	return 0;
}

