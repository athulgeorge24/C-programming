#include <stdio.h> 
#include <string.h>
struct structure
{
	int a;
 	char b[4];
 	float c;
};
union Union
{
	int a;
	char b[4];
	float c;
};
int main()
{
	int i,j;
	struct structure s;
	union Union u;
	s.a=2;
	strcpy(s.b,"a");
	s.c=3.14;
	u.a=2;
	strcpy(u.b,"a");
	u.c=3.14;
	i=sizeof(s);
	j=sizeof(u);
	printf("size of structure=%d\n",i);
	printf("size of union=%d\n",j);
	return 0;
}
