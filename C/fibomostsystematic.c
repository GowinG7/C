// fibonacci series using recursion

#include <stdio.h>
int fibo(int);
void main(){
	int i,n;
	printf("enter the number of terms of fibonacci series:");
	scanf("%d",&n);
	printf("The fibonacci series is:\n");
	for(i=0;i<n;i++){
		if(i==n-1){
			printf("%d.",fibo(i));
		break;
	}
		printf("%d + ",i,fibo(i));
	}
}
	int fibo(int num){
		if(num==0||num==1)
		return num;
		else
		return (fibo(num-1)+fibo(num-2));
	}


