#include <stdio.h>
int main()
{
	int a,b,mod;
	float div;
	char op;
	printf("Enter two numbers:\n");
	scanf("%d,%d",&a,&b);
	printf("Enter the operator:\n");
	scanf(" %c",&op);
	
		switch (op)
		{
			case '+':
				printf("The sum is %d\n",a+b);
				break;
			case '-':
				printf("The sum is %d\n",a-b);
				break;
			case '*':
				printf("The product is %d\n",a*b);
				break;
			case '/':
				if (b!=0)
				{
					div=(float)a/b;
					printf("The quotient is %f:\n",div);
					break;
				}
				else
				{
					printf("Invalid entry..Denominator cannot be zero\n");
					break;
				}
			case '%':
				 if (b!=0)
				{
					mod=a%b;
					printf("The modulus is %d:\n",mod);
					break;
				}
				else
				{
					printf("Invalid entry..Denominator cannot be zero\n");
					break;
				}
			default:
				printf("Invalid operator\n");
			}
		return 0;
}
				
	
	
