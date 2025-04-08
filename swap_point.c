#include <stdio.h>
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("After Swapping a=%d ; b=%d\n",*a,*b);
}
int main()
{
	int x,y,*a,*b;
	printf("Enter 2 number : ");
	scanf("%d,%d",&x,&y);
	a=&x;
	b=&y;
	printf("Before Swapping a=%d ; b=%d\n",x,y);
	swap(&x,&y);
	return 0;
}
	
	
