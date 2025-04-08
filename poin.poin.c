#include <stdio.h>
int main()
{
	int a=10,*p,**q;
	p=&a;
	q=&p;
	printf("before changing\n");
	printf("a =%d\n",a);
	printf("*p =%d\n",*p);
	printf("**q =%d\n",**q);
	**q+=10;
	printf("after changing\n");
	printf("a =%d\n",a);
	printf("*p =%d\n",*p);
	printf("**q =%d\n",**q);
	return 0;
}
	
