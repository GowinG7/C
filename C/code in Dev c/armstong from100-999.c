// Print armstong number from 100-999.

#include <stdio.h>
#include <stdio.h>
void main(){
	int n;
	for(n=100;n<=999;n++){
		int num=n;
		int rem,sum=0;
		while(n>=0){
			rem=n%10;
			sum=sum+pow(rem,3);
			n=n/10;
		}
		if(num==sum)
		printf("%d is armstong number.",num);
	}
}
