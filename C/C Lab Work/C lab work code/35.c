/* Write a C program to calculate sum of the natural number up to N number using recursive 
functions. */

#include<stdio.h>
int sum(int);
void main()
{
int n,s;
printf("Input a number(as it start from 1):\n");
scanf("%d",&n);
s=sum(n);
printf("Sum of natural numbers=%d",s);
}
int sum(int n)
{
if(n<=0)
return 0;
else
return(n+sum(n-1));
}
