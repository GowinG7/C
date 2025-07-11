#include <stdio.h>
#include <math.h>
void main(){
	float i,n,x,sum,p;
	printf("Enter last term's  numerator's second value:");
	scanf("%f",&n);
	printf("Enter value of x:");
	scanf("%f",&x);
	p=0;
	sum=0;
	for(i=2;i<=n;i=i+2){
		p=p+1;
		sum=sum+(((i+1)+i)/pow(x,p));
		printf("(%g+%g)/x^%g \t",i+1,i,p);
	}
	printf(" The total sum is %g",sum);
}