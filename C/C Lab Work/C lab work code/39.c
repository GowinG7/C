// Write a program to sort ‘n’ numbers in an array in ascending order by using pointer.

#include<stdio.h>
void main()
{
int arr[100],n,i,j,temp;
printf("How many elements are there?: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter elements in array according to index [%d] :",i);
scanf("%d",(arr+i));
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(*(arr+i)>*(arr+j))
{
temp=*(arr+i);
*(arr+i)=*(arr+j);
*(arr+j)=temp;
}
}
}
printf("\n sorted elements in ascending order using pointer:");
for(i=0;i<n;i++)
{
printf("\n %d",*(arr+i));
}
}