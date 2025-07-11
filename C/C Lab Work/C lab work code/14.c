// To display reverse of given number.
#include <stdio.h>
void main(){
	int n,rem,rev=0,num;
	printf("Enter a number:");
	scanf("%d",&n);
	num=n;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("The reverse of given number %d is %d.",num,rev);
}