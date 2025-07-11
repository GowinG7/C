// To check whether number is armstong or not.
#include <stdio.h>
#include <math.h>
void main(){
	int n,rem,sum=0,num;
	printf("Enter a number:");
	scanf("%d",&n);
	num=n;
	while(n>0){
		rem=n%10;
		sum=sum+pow(rem,3);
		n=n/10;
	}
	if(num==sum)
	printf("%d is Armstong",num);
	else
	printf("%d isn't Armstong",num);
}