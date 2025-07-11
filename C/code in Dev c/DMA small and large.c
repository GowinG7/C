// To find the smallest and largest number from aray using DMA.

#include <stdio.h>
void main(){
	int *ptr,i,n,small,large;
	printf("Enter the total number in the array:\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter the member of array as per index a[%d]:\n",i);
		scanf("%d",(ptr+i));
	}
	small=*(ptr+0);
	large=*(ptr+0);
	for(i=1;i<n;i++){
		if(small>*(ptr+i))
		small=*(ptr+i);
		if(large<*(ptr+i))
		large=*(ptr+i);
	}
	printf(" Smallest number=%d \n Largest number=%d.",small,large);
}