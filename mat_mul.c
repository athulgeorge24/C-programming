#include <stdio.h>
int main()
{
	int i,j,k,r1,c1,r2,c2;
	printf("Enter the size of matrix A:");
	scanf("%d,%d",&r1,&c1);
	printf("Enter the size of matrix B:");
	scanf("%d,%d",&r2,&c2);
	int a[r1][c1];
	int b[r2][c2];
	int re[r1][c2];
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
		for (j=0;j<c2;j++)
		{
		re[i][j]=0;
			for (k=0;k<c1;k++)
			{
				re[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("Result matrix :\n");
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c2;j++)
		{
			printf("%i ",re[i][j]);
		}
	printf("\n");
	}
return 0;
}
