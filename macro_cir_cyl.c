#include <stdio.h>
#define pi 3.14159
#define area_cir(x) (pi*r*r)
#define sur_area_cyli(x,h) (2*pi*r*(r+h))
int main()
{
	float r=0,h=0,cirare,sur_area_cyli;
	printf("Enter the radius of the circle and cylinder : ");
	scanf("%2f",&r);
	printf("Enter the height of the cylinder : ");
	scanf("%2f",&h);
	cirare=area_cir(r);
	sur_area_cyli=sur_area_cyli(r,h);
	printf("Area of circle is %2f\n",cirare);
	printf("Surface area of the Cylinder is %2f\n",sur_area_cyli);
	return 0;
}
