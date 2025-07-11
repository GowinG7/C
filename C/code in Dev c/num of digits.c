// count the number of digits in a given number.

#include <stdio.h>
void main(){
	int n,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	int num=n;
	while(n>0){
	n=n/10;
	count++;

	}
	printf("There are %d  digits in %d.",count,num);
}