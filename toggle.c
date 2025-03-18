#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter the size of the string\n");
	scanf("%d",&n);
	char a[n];
	printf("Enter the word\n");
	scanf("%s",a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
		{
			a[i]=a[i]-32;
		}else if(a[i] >= 'A' && a[i] <= 'Z')
		{	a[i]=a[i]+32;	
		}else 
		{	break;
		}
	}
	printf("%s\n",a);
	return 0;
}	
