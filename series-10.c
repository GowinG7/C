#include <stdio.h>
void main(){
	float i,n,sum,x;
	sum=0;
	printf("Enter one last term number only:");
	scanf("%f",&n);
	printf("Enter value of x:");
	scanf("%f",&x);
	for(i=2;i<=n;i=i+2){
		sum=sum+(i/(1+i*x));
		printf("%g/(1+%g*x), ",i,i);
	}
	printf("Its total sum is %g",sum);
}