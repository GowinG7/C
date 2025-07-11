#include <stdio.h>
void main(){
	float l,b,A;
	printf("Enter the length and breadth of rectangle:\n");
	scanf("%f%f",&l,&b);
	A=l*b;
	printf("The area of rectangle is %.2f square unit.",A);
}