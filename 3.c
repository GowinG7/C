#include <stdio.h>
void main(){
	float r,s,t,b;
	printf("Enter r:");
	scanf("%f",&r);
	printf("Enter s:");
	scanf("%f",&s);
	printf("Enter t:");
	scanf("%f",&t);
	b=(r/(s+t))-(r*s);
	printf("The result is%f",b);
}
