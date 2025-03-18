#include <stdio.h>
int fac(int a)
{
	int fac=1,i;
	for(i=1;i<=a;i++)
	{
		fac=fac*i;
	}
	return fac;
}
int main()
{
	int a,fact;
	printf("Enter the number : \n");
	scanf("%d",&a);
	fact=fac(a);
	printf("The factorial of %d is %d\n",a,fact);
	return 0;
}
