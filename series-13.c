#include <stdio.h>
#include <math.h>
void main(){
	 int i,n,sum,p;
	sum=0;
	printf("Enter first number of last term:");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2){
		p=(i*(i+2));
		sum=sum+pow(p,2);
		printf("(%d.%d)^2, ",i,i+2);
	}
	printf("The total sum is %d",sum);
}
