#include <stdio.h>
int main()
{
	char a[100],temp;
	int i,j,len;
	printf("Enter the string : ");
	scanf("%[^\n]",a);
	for(len=0;a[len]!='\0';len++);
	i=len-1;
	for(j=0;j<len/2;j++,i--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("The reversed string is %s",a);
return 0;
}	
	
	
