#include <stdio.h>
int main()
{
	int num,fac=1,i;
	printf("Enter a number:");
	scanf("%d",&num);
	if (num<0)
		printf("Invalid entry\n");
	else if (num==0)
		printf("1\n");
	else {
	i=num;
	while (i>1)
			{
			fac*=i;
			i--;
			}
		printf("Factorial =%d\n",fac);
		}
	
return 0;
}
