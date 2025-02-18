#include <stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter the size of matrix A:");
	scanf("%d,%d",&r,&c);
	int a[r][c];
	
	printf("Enter the elements in matrix:\n");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int sum=0;
		for (i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if (i==j)
				{
					sum+=a[i][j];
				}
			}
		}
		printf("Trace = %d",sum);
	return 0;
}
