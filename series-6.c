#include <stdio.h>
void main(){
	int i,n,sum;
	sum=0;
	printf("Enter last term denominator:");
	scanf("%d",&n);
	for(i=3;i<=n;i=i+3){
		sum=sum+i;
		printf("%d^2, ",i);
	}
	printf("Its total sum is %d^2",sum);
}