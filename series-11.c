#include <stdio.h>
void main(){
	float i,n,x,sum;
	sum=0;
	printf("Enter one last denominator:");
	scanf("%f",&n);
	printf("Enter value of x:");
	scanf("%f",&x);
	for(i=2;i<=n;i=i+2){
		sum=sum+(x/i);
		printf("x/%g, ",i);
	}
	printf("Its total sum is %g",sum);
}