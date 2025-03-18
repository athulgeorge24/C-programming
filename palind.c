#include <stdio.h>
int pali(int n)
{
	int rev=0,org=n,rem,tmp;
	for(tmp=n;tmp>0;tmp/=10)
	{
		rem=tmp%10;
		rev=rev*10+rem;
	}
	return org == rev;
}
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	if(pali(n))
	{
		printf("The given number is palidrome\n");
	}
	else
	{
	printf("The given number is not a palindrome\n");
	}
	return 0;
}
