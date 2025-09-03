#include<stdio.h>
int main()
{
	int num1,num2, result;
	printf("Enter 2 Numbers :\n");
	scanf("%d%d",&num1,&num2);

	printf("\n\n");
	printf("\n integer ");
	//Sum of 2 numbers
	result= num1+num2;
	printf("\nThe Sum is :%d",result);


	//Difference of 2 numbers
	result=num1-num2;
	printf("\nThe difference is :%d",result);


	//Product of 2 numbers
	result=num1*num2;
	printf("\nThe product is :%d",result);
  	printf("\n\n");


	//*************************


	printf("\ncharacter ");
	char result1;

	printf("\nSigned int ");
	//Sum of 2 numbers
	result1= (char)num1+(char)num2;
	printf("\nThe Sum is :%d",result1);


	//Difference of 2 numbers
	result1=(char)num1-(char)num2;
	printf("\nThe difference is :%d",result1);



	//Product of 2 numbers
	result1=(char)num1*(char)num2;
	printf("\nThe product is :%d",result1);

	printf("\n\n");
	//****************************

	printf("\nSigned int ");
	signed int  result2;

	//Sum of 2 numbers
	result2= (signed int)num1+(signed int)num2;
	printf("\nThe Sum is :%d",result2);


	//Difference of 2 numbers
	result2=(signed int)num1-(signed int)num2;
	printf("\nThe difference is :%d",result2);



	//Product of 2 numbers
	result2=(signed int)num1*(signed int)num2;
	printf("\nThe product is :%d",result2);
	printf("\n\n");


	//****************************

	printf("\n unsigend char ");
	unsigned char result3;

	//Sum of 2 numbers
	result3= (unsigned char)num1+(unsigned char)num2;
	printf("\nThe Sum is :%d",result3);


	//Difference of 2 numbers
	result3=(unsigned char)num1-(unsigned char)num2;
	printf("\nThe difference is :%d",result3);



	//Product of 2 numbers
	result3=(unsigned char)num1*(unsigned char)num2;
	printf("\nThe product is :%d",result3);
	printf("\n\n");


	//****************************

	printf("\nlong ");
	long  result4;

	//Sum of 2 numbers
	result4= (long)num1+(long)num2;
	printf("\nThe Sum is :%ld",result4);


	//Difference of 2 numbers
	result4=(long)num1-(long)num2;
	printf("\nThe difference is :%ld",result4);



	//Product of 2 numbers
	result4=(long)num1*(long)num2;
	printf("\nThe product is :%ld",result4);
	printf("\n\n");



	return 0;
}

