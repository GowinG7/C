// Reverse of a given string using string function.

#include <stdio.h>
#include <string.h>
void main(){
	char a[30],b[30];
	printf("Enter the string:");
	fgets(a,sizeof(a),stdin);
	strcpy (b,a);
	strlwr(b);
	strrev(b);
	printf("The reverse of given string %s is %s.",a,b);
}