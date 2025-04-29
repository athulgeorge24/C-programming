#include <stdio.h>
int main(int argc,char *argv[])
{
	printf("Total argument:%d\n",argc);
	for(int i=0;i<argc;i++)                                       
	{
		printf("Argument %d, %s :",i,argv[]);
	}
return 0;
} 
