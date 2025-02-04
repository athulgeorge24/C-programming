#include <stdio.h>
int main()
{
	int n,rev,orgi,rem;
	printf("Enter a number :");
	scanf("%d",&n);
	orgi=n;
	for(rev=0;n>0;n/=10)
		{
		rem=n%10;
		rev = rev*10+rem;
		}
		if (rev==orgi)
			printf("The number is palindrome\n");
		else 
			printf("The number is not palindrome\n");
return 0;
}
		
