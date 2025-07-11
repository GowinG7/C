#include <stdio.h>
#include <math.h>
void main(){
	float a,b,c,S,A;
	printf("Enter first side of triangle:");
	scanf("%f",&a);
	printf("Enter second side of triangle:");
	scanf("%f",&b);
	printf("Enter third side of triangle:");
	scanf("%f",&c);
	S=(a+b+c)/2;
	A=sqrt(S*(S-a)*(S-b)*(S-c));
	printf("Area of sides of triangle is %f unit square.",A);
	
}
