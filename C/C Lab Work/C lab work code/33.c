/* Write a recursive program to generate Fibonacci series up to n terms using recursive 
function. */

 #include <stdio.h>
 int fibo(int);
 void main(){
 	int n,i;
 	printf("How many terms are there?:");
 	scanf("%d",&n);
 	printf("0\t");
 	for(i=0;i<n-1;i++){
 		printf("%d \t",fibo(i));
	 }
 }
 int fibo(int n){
 	if(n==0 || n==1)
 	return 1;
 	else
 	return(fibo(n-1)+fibo(n-2));
 }