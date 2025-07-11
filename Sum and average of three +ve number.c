#include <stdio.h>
void main(){
	float a,b,c,S,A;
	printf("Enter first number:");
	scanf("%f",&a);
	printf("Enter second number:");
	scanf("%f",&b);
	printf("Enter third number:");
	scanf("%f",&c);
	if((a>0)&&(b>0)&&(c>0)){
		S=a+b+c;
		A=S/3;
		printf("Sum is %f.\n Average is %f.",S,A);
	} 
	else{
		printf("Please input  all positive numbers.");
	}
}
