//Write a program to find smallest number from the array using function.

#include <stdio.h>
void small(int[],int);
void main(){
	int arr[100],i,n;
	printf("How many elements are there?:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter element arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	small(arr,n);
}
void small(int a[],int n){
	int i,small;
	small=a[0];
	for(i=0;i<n;i++){
		if(small>a[i])
		small=a[i];
	}
	printf("\nSmallest element =%d.",small);
}
