#include <stdio.h>
int main()
{
	int n,rev,large=0,rem;
	printf("Enter a number :");
	scanf("%d",&n);
	for(rev=0;n>0;n/=10)
		{
		rem=n%10;
		
		
		switch (rem)
		{
		 case 1:
		 	printf("1 ;one\n");
		 	break;
		 case 2:
		 	printf("2 ;two\n");
		 	break;
		 case 3:
		 	printf("3 ;three\n");
		 	break;
		 case 4:
		 	printf("4 ;four\n");
		 	break;
		 case 5:
		 	printf("5 ;five\n");
		 	break;
		 case 6:
		 	printf("6 ;six\n");
		 	break;
		 case 7:
		 	printf("7 ;seven\n");
		 	break;
		 case 8:
		 	printf("8 ;eight\n");
		 	break;
		 case 9:
		 	printf("9 ;nine\n");
		 	break;
		 case 0:
		 	printf("0 ;zero\n");
		 	break;
		 }
	}
return 0;
		 
}
		
