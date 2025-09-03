#include<stdio.h>
#include<math.h>

int main ()
{
 int a ,b , c, peri;
 double area,a1;
 printf("\n enter three side length of triangle");
 scanf("%d%d%d",&a,&b,&c);
 peri=a+b+(c*a)+b+c;

 area= peri * (peri-a)*(peri-b)*(peri*c);
 
 a1 =sqrt(area);
 printf("\n perimeter is %d\n area is %.2lf",peri,a1);

return 0;
}

