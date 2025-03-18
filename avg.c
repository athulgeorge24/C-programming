#include <stdio.h>
int main()
{
	int i,n,sum=0,avg=0;
	printf("Enter the no.of element");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("The average is %d",avg);
	return 0;
}
	
