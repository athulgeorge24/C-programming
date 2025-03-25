#include <stdio.h>
int fib(int n)
{
	if (n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fac(n-1)+fac(n-2);
		
}
int main()
{
	int n,i;
	printf("Enter the numberb of terms:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("%d ",fib(i));
	}
	return 0;
}

