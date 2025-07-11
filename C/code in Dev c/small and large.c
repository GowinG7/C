// To find smallest and largest number among array.
#include <stdio.h>
void main(){
	int i,n,arr[100],large,small;
	printf("Enter the total number of elements in an array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter element of array in index a[%d]:\n",i);
		scanf("%d",&arr[i]);
	}
	small=arr[0];
	large=arr[0];
	for(i=1;i<n;i++){
		if(small>arr[i])
		small=arr[i];
		if(large<arr[i])
		large=arr[i];
	}
	printf(" Smallest number=%d \n largest number=%d.",small,large);
}