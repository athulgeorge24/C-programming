#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int len,i,j;
	printf("Enter the string :");
	scanf("%[^\n]",a);
	len = strlen(a);
	
	for(i=0;i<len;i++)
	{
	int count=1;
		if(a[i]!='\0')
		{
			for(j=i+1;j<len;j++)
			{
			if(a[i]==a[j])
				{
					count++;
					a[j]='\0';
				}
			}
		
		}
		if(a[i]!='\0')
		{
			printf(" %c : %d\n",a[i],count);
		}
		
	}
return 0;
}
