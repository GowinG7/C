/* Write a program to enter age of n students and count age between 18 and 25 from the array 
using DMA function. */

#include <stdio.h>
#include <stdlib.h>
void main(){
	int n,i,count=0,*ptr;
	printf("Enter the total number of students:");
	scanf("%d",&n);
	ptr=(int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("\nEnter the age of student :");
		scanf("%d",(ptr+i));
		if(*(ptr+i)>=18 && *(ptr+i)<=25)
		count++;
}
	printf("\n Number of students between 18 and 25=%d.",count);
}