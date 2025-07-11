// progrm to add two numbers using functions.

#include <stdio.h>
void sum(int,int);
void main(){
	int a,b;
	printf("ENter two numbers:");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
void sum(int x,int y){
	int s;
	s=x+y;
	printf("the sum is %d.",s);
}