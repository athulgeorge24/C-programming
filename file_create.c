#include <stdio.h>
int main()
{
FILE *fp;
int ch;
fp=fopen("File.txt","w");
fprintf(fp,"Hello world");
fclose(fp);
fp=fopen("File.txt","r");
if(fp==NULL)
{
	printf("Error opening file");
	return 0;
}

printf("The content in the file is \n");
while((ch=fgetc(fp))!=EOF)
	{
		putchar(ch);
	}
printf("\n");
fclose(fp);
return 0;
}
