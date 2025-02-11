#include <stdio.h>
int main()

{
	int n,i,min,max,p1,p2;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:\n");
	for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		min=a[0];
		p1=0;
		max=a[0];
		p2=0;
	for (i=1;i<n;i++)
		{
		if (min>a[i])
			{
				min=a[i];
				p1=i;
			} 
		if (max<a[i])
			{
				max=a[i];
				p2=i;
			}
		}
		printf("The largest number is %d at position %d\n",max,p2+1);
		printf("The smallest number is %d at position %d\n",min,p1+1);
return 0;
}
