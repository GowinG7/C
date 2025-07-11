/* WAP using array to insert the  elements and display the elements in ascending order.*/

#include <stdio.h>
void main(){
	int n,i,j,arr[100],temp;
	//to take number of elements to be inserted in an array
	printf("Enter the total number of elements in an array:");
	scanf("%d",&n);
	//to take input from user to store in array
	for(i=0;i<n;i++){
	printf("Enter the element in index [%d]:",i);
	scanf("%d",&arr[i]);
}
//to sort the given data in a  array

for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++){
		if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
	//To print the data in ascendind order
	printf("\nSorting elements of data in ascending order:\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
