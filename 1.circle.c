#include<stdio.h>
#define pie 3.15
int main()
{
	float area,circumference,radius;
	printf("enter radius\n");
	scanf("%f",&radius);
	printf("area=%f\n",pie*radius*radius);
	printf("circumference=%f\n",2*pie*radius);
	return 0;

}
