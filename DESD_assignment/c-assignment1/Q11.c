#include<stdio.h>
#include<limits.h>
#include<float.h>

int main ()
{
	
	printf("________________________________________________________________________\n");
	printf("Data Type      Format Specifier    size      min Range     Max range     \n");
	printf("________________________________________________________________________\n");
	printf("%-20s %-20s %-15ld %-15d %-15d \n","signed char","%c",sizeof(signed char),SCHAR_MIN,SCHAR_MAX);
	printf("%-20s %-20s %-15ld %-15u %-15u \n","unsigned char","%c",sizeof(unsigned char),0,UCHAR_MAX);
    printf("%-20s %-20s %-15ld %-15d %-15d \n","short int" ,"%hd",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("%-20s %-20s %-15ld %-15u %-15u \n","unsigned short int","%hu",sizeof(unsigned short int),0,USHRT_MAX);
	printf("%-20s %-20s %-15ld %-15d %-15d \n","int","%d",sizeof(int ),INT_MIN,INT_MAX);
	printf("%-20s %-20s %-15ld %-15u %-15u \n","unsigned int","%u",sizeof(unsigned int),0,UINT_MAX);
	printf("%-20s %-20s %-15ld %-15ld %-15ld \n","long int","%ld",sizeof(long int),LONG_MIN,LONG_MAX);
	printf("%-20s %-20s %-15ld %-15lu %-15lu \n","unsigned long int","%lu",sizeof(unsigned long int),0UL,ULONG_MAX);

                                                                                                 
	printf("%-20s %-20s %-15ld %-20e %-20e\n", "float", "%f", sizeof(float), FLT_MIN, FLT_MAX);
    printf("%-20s %-20s %-15ld %-20e %-20e\n", "double", "%lf", sizeof(double), DBL_MIN, DBL_MAX);
    printf("%-20s %-20s %-15ld %-20Le %-20e\n", "long double", "%lf", sizeof(long double), LDBL_MIN, LDBL_MAX);


	return 0;
}

