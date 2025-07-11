// Fibonacci series: 0 1 1 2 3 5 8.........upto n terms.

#include <stdio.h>
void main(){
	int a=0,b=1,n,c,i;
	printf("Enter the total number of terms in fibonacci series:\n");
	scanf("%d",&n);
	printf("The fibonacci series are:\n");
	printf(" %d,%d",a,b);
	for(i=0;i<n-2;i++){
		c=a+b;
		a=b;
		b=c;
		printf(",%d",c);
	}
	printf(".");
}