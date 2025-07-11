#include <stdio.h>
void main(){
	int i,n,sum;
	sum=0;
	printf("Enter last term denominator:");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2){
		sum=sum+i;
		printf("1/(%d^2), ",i);
	}
	printf("Its total sum is 1/(%d^2)",sum);
}