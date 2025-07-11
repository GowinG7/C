// Write a program to find the area and circumference of circle by using function. 
   
   // I have used function with no arguments and no return value.
#include <stdio.h>
#include <math.h>
#define pi 3.14
	void func();
	void main(){
		func();
	}
	void func(){
		int r;
		float A,C;
		printf("Enter the radius of a circle(r<0):\n");
		scanf("%d",&r);
		A=pi*pow(r,2);
		C=2*pi*r;
		printf("The area of circle is %.2f square unit. \n and circumference is %.2f unit.",A,C);
	}
	