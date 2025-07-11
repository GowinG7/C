// Write a macro code to display area of circle. 

#include <stdio.h>
#define area(r)	3.14*r*r
void main(){
	int r;
	printf("Enter radius of circle:");
	scanf("%d",&r);
	printf("Area of circle=%.2f",area(r));
}