// Sum of first 20 odd number

#include <stdio.h>
void main(){
	int sum=0,i,num=1;
	for(i=1;i<=2;i++){
		sum=sum+num;
		num=num+2;
		
	}
	printf("%d ",sum);
}