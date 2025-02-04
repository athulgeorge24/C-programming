#include <stdio.h>
int main()
{
	int n,rev,large=0,rem;
	printf("Enter a number :");
	scanf("%d",&n);
	for(rev=0;n>0;n/=10)
		{
		rem=n%10;
		
		if (rem>large)
			large=rem;
		}
		printf("%d \n",large);
return 0;
}
		
