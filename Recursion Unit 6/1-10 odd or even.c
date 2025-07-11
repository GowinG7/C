// 3.WAP to print the numbers from 1-10 Condition: if odd add 1 and if even subtract 1.

#include <stdio.h>
void even();
void odd();
int n=1;		// n is global so each block ma increment grda value badirakhxa
int main(){

	printf("The required numbers are:\n");
	odd();
	return 0;
}

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
	

