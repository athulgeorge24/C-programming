#include <stdio.h>
int main()
{
	int rollNo,age;
	float height;
	char grade;
	printf("Enter the roll number:");
	scanf("%d",&rollNo);
	printf("Enter the age and height:");
	scanf("%d,%f",&age,&height);
	printf("Enter the grade:");
	scanf(" %c",&grade);
	printf("Your roll number is %d",rollNo);
	printf("The age is %d and the height is %.1f",age,height);
	printf("Your grade is %c\n",grade);
	return 0;
}
