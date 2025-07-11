#include <stdio.h>
void main(){
	int i,n,sum;
	sum=0;
	printf("Enter last term:");
	scanf("%d",&n);
	for(i=2;i<=20;i=i+2){
		sum=sum+i;
		printf("%d ",i);
	}
	printf("%d",sum);
}