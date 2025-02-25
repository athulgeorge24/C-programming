#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	printf("Enter 1st string :");
	scanf("%s",a);
	char b[100];
	printf("Enter 2nd string :");
	scanf("%s",b);
	char ab=strcmp(a,b);
	if (ab == 0)
	{
		printf("The strings are same");
	}
	else
	{
		printf("The strings are not same");
	}
return 0;
}
