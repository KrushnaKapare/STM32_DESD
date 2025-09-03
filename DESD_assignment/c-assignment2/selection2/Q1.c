#include<stdio.h>

int main ()
{
	int  year;
    
	int temp;

    enum month1{ jan=1,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec};

	typedef enum month1 m;
	m month;

    printf("\n enter the month and year ");
    scanf("%d%d",&month,&year);

    

	switch(month)
	{
		case jan:
		case mar:
		case may:
		case july:
		case aug:
		case oct:
		case dec:	printf("\n no of days are 31");
				    break;

        case feb:
 
	   if((year %400==0)||(year %4 ==0 && year %100!=0 ) )
      {
          
          printf("\n its a leap year \n days are 29");
      }
        else{
      printf  ("its not a leap year \n days are 28");
          }
		break;
	
		case apr:
		case june:
		case sep:
		case nov:
		  		printf("\nno of days are 30 ");
				break;
			default:printf("enter correct month and year ");
					break;
	}
	return 0;
}


