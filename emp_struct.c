#include <stdio.h>
struct employee
{
	char name[50];
	int ID;
	float Salary;
};
int main()
{
	int n,i;
	printf("Enter the number of Employee: ");
	scanf("%d",&n);
	struct employee e[n];
	for (i=0;i<n;i++)
	{
		printf("Enter the name of the Employee %d: ",i+1);
		scanf("%s", e[i].name);
		printf("Enter the employee id : ");
		scanf("%d",&e[i].ID);
		printf("Enter the salary of the employee : ");
		scanf("%f",&e[i].Salary);
	}
	
	for (i=0;i<n;i++)
	{
		printf("Details of Employee %d\n",i+1);
		printf("Name of the Employee :%s\n", e[i].name);
		printf("Employee id :%d \n",e[i].ID);
		printf("Salary of the employee : %f\n",e[i].Salary);
		
	}
return 0;
}
	
