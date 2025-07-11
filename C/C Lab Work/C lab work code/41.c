// Write a program to find the largest and smallest number in a list of N numbers using DMA.

#include <stdio.h>
#include <stdlib.h>
void main(){
	int n,i,*ptr,small,large;
	printf("How many elements are there?:");
	scanf("%d",&n);
	ptr=(int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter array elements:");
		scanf("%d",(ptr+i));
	}
	 small=*(ptr+0);
	 large=*(ptr+0);
	 for(i=0;i<n;i++){
	 	if(small>*(ptr+i))
	 	small=*(ptr+i);
	 	if(large<*(ptr+i))
	 	large=*(ptr+i);
	 }
	 printf("\n Smallest element=%d \n and largest element=%d",small,large);
}