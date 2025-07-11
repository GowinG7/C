// Find the reverse of a number.

#include <stdio.h>
void main(){
	int rev=0,n,num,rem,i;
	printf("Enter the number:");
	scanf("%d",&n);
	num=n;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("The reverse of a given string %d is %d.",num,rev);
	
}