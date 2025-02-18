#include <stdio.h>
int main()
{
	int i,j,r1,c1,r2,c2;
	printf("Enter the size of square matrix A (r,c) :");
	scanf("%d,%d",&r1,&c1);
	printf("Enter the size of square matrix B (r,c) :");
	scanf("%d,%d",&r2,&c2);
	int a[r1][c1];
	int b[r2][c2];
	int sum[r1][c1];
	if (r1==r2 && c1==c2)
	{
		printf("Enter the elements in matrix A :\n");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements in matrix B :\n");
		for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
	
		for (i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				sum[i][j]=a[i][j]+b[i][j];
			}
		}
		for (i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",sum[i][j]);
			}
		printf("\n");
		}
	}
	else
	{
		printf("Invalid Matrix Dimensions..Can't perform matrix addition\n");
		return 0;
	}
return 0;
}
	
