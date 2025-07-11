#include <stdio.h>
void main(){
	float i,x,sum=0,n;
	printf("Enter  last term numerator:");
	scanf("%f",&n);
	printf("Enter the value of x:");
	scanf("%f",&x);
	for(i=3;i<=n;i=i+3){
		sum=sum+(i/(x+i));
		printf("%g/(x+%g), ",i,i);
	}
	printf("It's total sum is %g",sum);
}