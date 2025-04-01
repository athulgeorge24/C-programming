#include <stdio.h>
struct student
{
	char name[20];
	int roll;
	float mark[3];
	float total;
	float avg;
};
int main()
{
	int n,i,j;
	printf("Enter the number of student: ");
	scanf("%d",&n);
	struct student s[n];
	for (i=0;i<n;i++)
	{
	 	printf("Enter the name of the student %d :",i+1);
	 	scanf("%s",s[i].name);
	 	printf("Enter the Roll no : ");
	 	scanf("%d",&s[i].roll);
	 	s[i].total=0;
	 	printf("Enter the marks of three subject:\n");
	 	for(j = 0; j < 3; j++) 
	 	{
	
			scanf("%f", &s[i].mark[j]);
			s[i].total += s[i].mark[j];
		}
		 s[i].avg = s[i].total / 3.0;
   		 printf("\n");
	}
	
	printf("Displaying Student Information \n");

	for(i = 0; i < n; i++) 
	{
		printf("\nStudent: %d \n", i + 1);
		printf("Name: %s \n", s[i].name);
		printf("Roll Number: %d \n", s[i].roll);
		printf("Total Marks: %.2f \n", s[i].total);
		printf("Average Marks: %.2f \n", s[i].avg);
	}

return 0;
}
	 	
	 	 
	 	
	
