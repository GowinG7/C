// to check if given string is palindrome or not.

#include <stdio.h>
#include <string.h>
void main(){
	char a[20],b[20];
	printf("Enter a string:");
    scanf("%s",a);
	strupr(a);
	strcpy(b,a);
	strrev(a);
	if(strcmp(a,b)==0)
	printf("%s is palindrome.",b);
	else
	printf("%s isn't palindrome.",b);
}