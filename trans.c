#include <stdio.h>
int main()
{
	int i,j,r1,c1,r2,c2;
	printf("Enter the size of matrix A:");
	scanf("%d,%d",&r1,&c1);
	int a[r1][c1];
	
	printf("Enter the elements in matrix:\n");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		c2=r1;
		r2=c1;
		int trans[r2][c2];
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				trans[j][i]=a[i][j];
			}
		}
		for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				printf("%d  ",trans[j][i]);
			}
		printf("\n");
		}
	return 0;
}
