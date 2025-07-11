// To search an element from n elements in an array.
#include <stdio.h>
void main(){
	int arr[100],n,i,search;
	printf("Enter total number of element in an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter array element in index arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the number to be searched:");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(search==arr[i]){
			printf("%d is found in %d index of array.",search,i);
			break;
		}
	}
	if(i==n)
	printf("%d isnot found in array.",search);
}