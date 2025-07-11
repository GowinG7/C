// To print either given number is prime or composite.

#include <stdio.h>
void main(){
	int i,n,prime,composite,count=0;
	printf("Enter the positive number greater than 1:");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(n%2==0)
		count++;
	}
	if(count>2)
	printf("%d is composite number.",n);
	else
	printf("%d is prime number.",n);
}