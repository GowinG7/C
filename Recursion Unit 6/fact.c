// factorial of a number

#include <stdio.h>
int fact(int);
int main(){
	int n;
	printf("Enter the number that you need factorial of:");
	scanf("%d",&n);
	printf("The factorial of %d is ",n);
	if(n<0)
	printf("The factorial of -ve number can't be calculated.");
	else
	printf("%d.",fact(n));
	return 0;
}
int fact(int n){
	if(n==0||n==1)
	return 1;
	else
	return n*fact(n-1);
}