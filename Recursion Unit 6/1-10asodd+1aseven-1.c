// 3.WAP to print the numbers from 1-10 Condition: if odd add 1 and if even subtract 1.

#include <stdio.h>
int even(int);
int odd(int);
//int n=1;		// n is global so each block ma increment grda value badirakhxa
void main(){
	int n=1;
	odd(n);
}
/*
void odd(){
	if(n<=10){
		printf("%d ",n+1);  //it doesnot effect the varaible value as it only print the the value with out changing 
		n++;  // here the real value of n increment
		even();
	}
	
}
	void even(){
		if(n<=10){
			printf("%d ",n-1); //for only printing the value for not incrementing
			n++; //here the real value of n increment
			odd();
		}
		
	}
	
*/
int odd(int n){
	if(n<=10)
	printf("%d ",n+1);
	n++;
	even(n);
	
}
int even(int n)
{
	if(n<=10)
	printf("%d ",n-1);
	n++;
	odd(n);
}