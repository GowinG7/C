// Converting given string into lowercase.

#include <stdio.h>
#include <string.h>
void main(){
	char a[20];
	printf("Enter a string:");
	fgets(a,sizeof(a),stdin);
	strlwr(a);
	printf("%s",a);
}