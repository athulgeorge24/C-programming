#include <stdio.h>
#include <string.h>
int main()
{

	int i,n,j,key=0;
	printf("Enter the number of rows of the list : ");
	scanf("%d",&n);
	char a[n][10],b[10];
	printf("Enter the elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	printf("Enter the elements you need to search:\n");
	scanf("%s",b);
	for (i=0;i<n;i++)
	{
		if (strcmp(a[i],b)==0)
		{	
			key=1;
			break;
		}
	}
	if(key==1)
	{
		printf("The word find in the list");
	}
	else
	{
		printf("The word is not find in the list");
	}	
	return 0;
}
