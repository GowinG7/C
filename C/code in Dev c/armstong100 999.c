// Print armstong number from 100-999.

#include <stdio.h>
#include <math.h>
void main(){
	int n;
	for(n=100;n<=999;n++){
		int num=n;
		int rem,sum=0;
		while(num>0){
			rem=num%10;
			sum=sum+pow(rem,3);
			n=num/10;
		}
		if(n==sum)
		printf("%d is armstong number.",n);
	}
}
