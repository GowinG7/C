// To find the sum of first 20 odd number.

#include <stdio.h>
void main(){
	int num=1,sum=0,count=0;
	while(count<=5) {
		sum=sum+num;
		num=num+2;
		count++;
	}
	printf("%d",sum);
}