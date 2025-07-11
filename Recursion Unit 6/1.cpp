//Fibonacci series.

#include <stdio.h>
int fibo(int);// function declaration
int main(){
	int n,i;
	printf("Enter the number of terms in the fibonacci series:");
	scanf("%d",&n);
	printf("The Fibonacci series is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",fibo(i)); //function call
	return 0;
}
int fibo(int n){		//block of code:-function defination
	if(n==0||n==1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}