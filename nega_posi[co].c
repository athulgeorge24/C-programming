#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	a>0?printf("The given number is positive\n"):a==0?printf("The given number is zero\n"):printf("The given number is negative\n");
	return 0;
}
