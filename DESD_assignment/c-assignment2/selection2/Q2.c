#include<stdio.h>
int main()
{
	int n1,n2;
	float res;
	printf("\n enter the num");
	scanf("%d%d",&n1,&n2);

	typedef enum choice{ADD=1,SUB,MUL,DIV}CHOICE;
	CHOICE s1;
	printf("\n1.ADD\n2.SUB\n3.MUL\n4.DIV");
	printf("enter your choice");
	scanf("%d",&s1);

	switch(s1)
	{
		case ADD: res=n1+n2;
				  printf("res=%.2f\n",res);
				  break;
		case SUB: res=n1-n2;
				  printf("res=%.2f\n",res);
				  break;
		case MUL: res=n1*n2;
				  printf("res=%.2f\n",res);
				  break;
		case DIV: if(n2==0)
					  printf("cannot divide by zero ");
				  else
				  {
					  res=(float)n1/n2;
					  printf("\n res=%.2f",res);
				  }
				break;
		default : printf("\n wrong choice");
				  break;
		}
	return 0;
}

