#include <stdio.h>
void main(){
	int i,n,sum;
	sum=0;
	printf("Enter last term denominator:");
	scanf("%d",&n);
	for(i=3;i<=n;i=i+7){
		sum=sum+i;
		printf("1/%d, ",i);
	}
	printf("Its total sum is 1/%d",sum);
}