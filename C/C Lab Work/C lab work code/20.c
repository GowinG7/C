// To sort n elements in an array in ascending order using selection sort.
#include <stdio.h>
void main(){
	int n,temp,arr[100],i,j;
	printf("Enter the number of element in an array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the array's element in index arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nThe number of element in ascending order are \n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}