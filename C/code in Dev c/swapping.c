#include <stdio.h>
void main(){
	int a=10,b=20;
	printf("before swapping:\n a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping:\n a=%d and b=%d",a,b);
}