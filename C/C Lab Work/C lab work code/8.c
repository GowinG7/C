#include <stdio.h>
void main(){
	int num;
	printf("Enter the non- decimal number:");
	scanf("%d",&num);
	if(num>0)
	printf("%d is Positive number.",num);
	else if(num<0)
	printf("%d is negative number.",num);
	else
	printf("Number is  zero.");
}