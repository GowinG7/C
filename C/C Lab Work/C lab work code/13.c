// Multiplication of any number.
#include <stdio.h>
void main(){
	int i,x;
	printf("Enter a number:");
	scanf("%d",&x);
	for(i=1;i<=10;i++){
		printf(" %d x %d = %d \n ",x,i,x*i);
	}
}