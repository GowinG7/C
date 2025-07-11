#include <stdio.h>
#include <math.h>
void main(){
	float x1,x2,a,b,c,k,L;
	printf("Enter the value of a,b,c from given quadratic equation:\n");
	scanf("%f%f%f",&a,&b,&c);
 k=(pow(b,2)-(4*a*c));
 L=sqrt(k);
 x1=(-b+L)/(2*a);
 x2=(-b-L)/(2*a);
 printf("The roots of quadratic equation are: %.3f and %.3f.",x1,x2);
}