#include <stdio.h>

int main()
{
	float radius;
	const float Pi=3.14;
	float area;
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	area = Pi*radius*radius;
	printf("The area of the circle is %2.f",area);
	return 0;
}
