#include <stdio.h>
void main(){
	float a,b,c;
	printf("Enter value of a,b,c:\n");
	scanf("%f%f%f",&a,&b,&c);
	c= (a+b+c)/3;
	printf("The middle number is %.2f.",c);
	}