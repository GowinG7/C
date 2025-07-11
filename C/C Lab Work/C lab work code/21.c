/* Write a program to read salaries of n employees and count the number of employees getting 
salary between 45,000 to 70,000.*/

#include <stdio.h>
void main(){
	int a[100],n,i,count=0;
	printf("Enter the total number of employees:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Enter salary of employee:\n");
	scanf("%d",&a[i]);
	if(a[i]>45000&&a[i]<70000)
	count++;
}
printf("\nNumber of employees having salary between 45k - 70k = %d.",count);
}