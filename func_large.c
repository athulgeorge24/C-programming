#include <stdio.h>
int large(int a[],int n)
{
	int i,j,large=0;
	for(i=0,j=i+1;i<n,j<n;i++,j++)
	{
		if(a[i]<a[j])
		{
			large=a[j];		
		}
		else
		{
			large=a[i];
		}
	}
return large;
}
int main()
{
	int n,result;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	result=large(a,n);
	printf("The largest number is %d",result);
return 0;
}
	
	
