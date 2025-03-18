#include <stdio.h>
int add(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
int main()
{
	int n,i,result;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The numbers are :\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	result=add(a,n);
	printf("\n");
	printf("The sum of the elements is %d \n",result);
return 0;
}
