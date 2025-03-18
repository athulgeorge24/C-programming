#include <stdio.h>
#include <string.h>
int main()
{
	int i,n,j;
	printf("Enter the number of the names : ");
	scanf("%d",&n);
	char a[n][10],temp[10];
	printf("Enter the names:\n");
	for (i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (strcmp(a[i],a[j])<0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[i]);
				strcpy(a[i],temp);
			}
		}
	}
	printf("The reversed list :");
	for (i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}	
	return 0;
}
	
