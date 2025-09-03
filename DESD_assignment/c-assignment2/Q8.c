#include<stdio.h>
int main ()
{
	int quantity , price;

	printf("enter the quantity\n");
	scanf("%d",&quantity);

	price =5;

	if(quantity > 30 && quantity <50)
	{
		float dis;
    	dis = ((quantity*price) / 100.0)*10;
		printf("\nyou got the discount of 10%% on the quantity %d of rs %.2f",quantity,dis);
	}
	else if(quantity > 50)
	{
		float dis;
		dis =((quantity *price)/100.0)*15;
		printf("\n you got the discount of 15%% on the quantity %d of rs %.2f",quantity,dis);
	}
	else
	{
		printf("\n you dont got an discount");
	}
	return  0;
}
