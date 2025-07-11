#include <stdio.h>
void main(){
	float r,s,t,k;
	printf("Enter r:");
	scanf("%f",&r);
		printf("Enter s:");
	scanf("%f",&s);
		printf("Enter t:");
	scanf("%f",&t);
	k=(34*r*s*t)/(3.14+r+(s*t));
	printf("The result is %f.",k);
}
