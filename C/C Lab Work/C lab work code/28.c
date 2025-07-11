//Write a program to display whether given string is palindrome or not. 

#include<stdio.h>
#include<string.h>
void main()
{
char st1[20],st2[20];
printf("Enter a string: ");
scanf("%s",st1);
strcpy(st2,st1);
strrev(st2);
if(strcmpi(st1,st2)==0)
printf("%s is palindrome",st1);
else
printf("%s is not palindrome",st1);
}
