#include <stdio.h>
#define swap(a,b) (temp=a,a=b,b=temp)
int main()
{
	int a,b,temp;
	printf("Enter two numbers");
	scanf("%d,%d",&a,&b);
	printf("Before swap a=%d b=%d",a,b);
	swap(a,b);
	printf("After swap a=%d b=%d",a,b);
	return 0;
}
