#include <stdio.h>
int main()
{
	FILE *fp1,*fp2;
	int ch;
	fp1=fopen("file.txt","r");
	fp2=fopen("file1.txt","w");
	while((ch=fgetc(fp1))!=EOF)
		{
			fputc(ch,fp2);
		}
	return 0;
}
