// Insert the 10 elements in array and display it in the reverse order

#include <stdio.h>
void main(){
int i,arr[10];
for(i=0;i<10;i++){
printf("Enter the elements of array as per index [%d]:",i);
scanf("%d",&arr[i]);
}
printf("\n Before displaying in reverse order:\n");
for(i=0;i<10;i++){
	printf(" %d \t",arr[i]);
}
printf("\n Displying elements of list in reverse order:\n");
//array index start from 0 so here only 10 data so it goes to 9-0
for(i=9;i>=0;i--){
	printf(" %d \t",arr[i]);
}
}