#include <stdio.h>
#include <math.h>
void main(){
	float k,l,x,y,p;
	printf("Enter the value of x and y:\n");
	scanf("%f %f",&x,&y);
	k=pow(y,2)+5;
	l=sqrt(k);
	p=5*x*l;
	printf("The result is %.3f.",p);
}