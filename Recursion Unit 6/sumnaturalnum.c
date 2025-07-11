// Sum of n natural numbers.

#include <stdio.h>
int sum(int);
int main(){
	int n;
	printf("Enter the number of terms upto which you want the sum of natural numbers:");
	scanf("%d",&n);
	printf("The sum of %d natural numbers is ",n);
	printf("%d.",sum(n));
	return;
}
int sum(int n){
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}