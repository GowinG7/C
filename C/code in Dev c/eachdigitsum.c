//sum of each digit of given number.

#include <stdio.h>
void main(){
	int n,sum=0,rem;
	printf("Enter a number:");
	scanf("%d",&n);
	int num=n;
	while(n>0){
		rem=n%10;
	sum=sum+rem;
	n=n/10;

	}
	printf("Sum of each digits of %d is %d.",num,sum);
}