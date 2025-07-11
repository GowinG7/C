// armstong or not.
#include <stdio.h>
#include <math.h>
void main(){
	int n,sum=0,rem;
	printf("Enter a number:");
	scanf("%d",&n);
	int num=n;
	while(n>0){
		rem=n%10;
	sum=sum+pow(rem,3);
	n=n/10;
}
if(num==sum)
printf("%d is armstong.",num);
else
printf("%d isn't armstong.",num);
}
