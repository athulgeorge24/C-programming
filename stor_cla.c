#include <stdio.h>
int x=10;
void stat_auto()
{	
	static int a=5;
	auto int b=6;
	printf("static storage a=%d\n",a);
	printf("auto storage b=%d\n",b);
	a++;
	b++;
}
int reg()
{
	register int a=1;
	return a;
}
	
	int main()
{
	stat_auto();
	stat_auto();
	int y=reg();
	printf("Register storage is : %d\n",y);
	int a=x;
	printf("External storage is : %d\n",a);
	return 0;
}
	
