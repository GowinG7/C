//Swappng variable without  using third variable.
#include "stdio.h"
void main(){
	int a=2,b=10;
	printf("before swapping:\n a=%d and b=%d",a,b);
	a=a+b;	//a=12
	b=a-b;	//b=2
	a=a-b;	//a=10
		printf("\n After swapping:\n a=%d and b=%d",a,b);
}