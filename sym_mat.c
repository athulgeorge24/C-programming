#include <stdio.h>
int main()
{
	int i,j,r1,c1,sym=1,c2,r2;
	printf("Enter the size of matrix :");
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
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				if (trans[i][j]!=a[i][j]);
				{
					sym=0;
					break;
				}
			}
		}
		if (sym=1)
			printf("The given matrix is symmetric\n");
		else
			printf("The given matrix is not symmetric\n");
	return 0;
}
		
