#include <stdio.h>
int main()
{
	int n,i,key,flag=0,pos=0;
	printf("Enter the no of elements :");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("Enter the value you want to search :");
	scanf("%d",&key);
		for (i=0;i<n;i++)
			{
				if (a[i]==key)
					{
						flag=1;
						key=a[i];
						pos=i;
					}
			}
				if (flag==0)
					{
						printf("The given value is not in the array\n");
					}
				else
					{
						printf("The given value %d is present in the array at the postion %d\n",key,pos+1);
					}
			
	return 0;
}
						
