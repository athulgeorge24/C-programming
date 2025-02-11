#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of element :");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for (i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	int b[n];
	for (i=0;i<n;i++)
		{
		b[i]=a[i];
		}
	for (i=0;i<n;i++)
		{
		printf("%d ",b[i]);
		}
	
	
	return 0;
}
	
