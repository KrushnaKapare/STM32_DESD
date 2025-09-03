#include<stdio.h>

int main ()
{
	int month;

	printf("\n enter the month ");
	scanf("%d",&month);

	/*
	   if(month >= 1 && month <=12)
	{

		if(month==1)
		{
			printf("\n days in january are 31 ");

		}
		else if(month==2)
		{
			printf("\ndays in feb are 28 or 29");
		}
		else if(month==3)
		{
			printf("\ndays in march are 31");
		}
		else if(month==4)
		{
			printf("\n days in april are 30");
		}
		else if(month==5)
		{
			printf("\ndays in may are 31");
		}
		else if(month==6)
		{
			printf("\ndays in june are 30");
		}
		else if(month==7)
		{
			printf("\ndays in july are 31");
		}
		else if(month==8)
		{
			printf("\ndays in august are 31");
		}
		else if(month==9)
		{
			printf("\ndays in september are 30");
		}
		else if(month==10)
		{
			printf("\ndays in october are 31");
		}
		else if(month==11)
		{
			printf("\ndays in november are 30");
		}
		else if(month==12)
		{
			printf("\ndays in december are 31");
		}
		}
	else
	{
		printf("\n enter correct month");
	}

	*/

	if(month>=1 && month<=12)
	{
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||  month == 10 || month == 12)

		{
			printf("\n days are in month are 31 days");
		}

	   else if(month == 4 || month == 6 || month == 9 || month == 11)
	   {
		   printf("\n30 days are in month ");
		 }
	  else
	  {
		  printf("\n 28 or 29 days in month ");
		 }
	}
	else
	{
		printf("\n enter correct month ");
	}





















	return 0;
}

