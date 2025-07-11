// Write a program to calculate the factorial of a given number using recursive function.

#include<stdio.h>
int factorial(int);
void main()
{
int num,fact;
printf("Enter a number:\n");
scanf("%d",&num);
fact=factorial(num);
printf("Factorial of %d = %d",num,fact);
}
int factorial(int n)
{
if(n==0)
return 1;
else
return (n*factorial(n-1));
}