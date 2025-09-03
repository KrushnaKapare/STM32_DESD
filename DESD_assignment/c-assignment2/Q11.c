#include<stdio.h>
int main ()
{
	float x , y;
	printf( "enter co-ordinates x and y");
	scanf("%f%f",&x,&y);


	if (x>0 && y>0)
	{
		printf("\n point lies in first quadrant");
	}
	else if( x<0 && y > 0)
	{
		printf("\n point lies in second quadrant");
	}
	else if(x < 0 && y < 0)
	{
		printf("\n point lies in third quadrant");
	}
	else if(x > 0 && y<0)
	{
		printf("\n point lies in fourth quadrant");
	}
	else if((x >0 || x<0) && y==0)
	{
		printf("\n point lies on +- x axis ");
	}
	else if((y>0 || y<0)&& x ==0)
	{
		printf("\n point lies on +- y axis");
	}
	else {
		printf("\n points lies on origin ");
	}
	return 0;
}

