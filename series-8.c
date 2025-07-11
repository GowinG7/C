#include <stdio.h>
void main(){
	int i,n,sum;
	sum=0;
	printf("Enter last term number only:");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2){
		sum=sum+i;
		printf("(x+%d), ",i);
	}
	printf("Its total sum is (x+%d)",sum);
}