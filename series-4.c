#include <stdio.h>
void main(){
	int i,n,sum;
	sum=0;
	printf("Enter last term denominator:");
	scanf("%d",&n);
	for(i=4;i<=n;i=i+5){
		sum=sum+i;
		printf("x/%d, ",i);
	}
	printf("Its total sum is x/%d",sum);
}