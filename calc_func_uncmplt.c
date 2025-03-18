#include <stdio.h>
int calc(int a,int b)
{
	printf("sum =%d\n",a+b);
	printf("Product =%d\n",a*b);
	printf("Difference =%d\n",a-b);
return 0;
}
int main()
{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	calc(a,b);
return 0;
}
