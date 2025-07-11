#include <stdio.h>
#include <math.h>
void main()
{
	float x,y,P;
	printf("Enter x:");
	scanf("%f",&x);
	printf("Enter y:");
	scanf("%f",&y);
	P=(pow(x,2)+pow(y,2)+(2*x*y))/(x+y);
	printf("The results is%f",P);
}

