#include <stdio.h>
void main(){
	int a,b,c;
	printf("Enter value of a , b and c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&b>c)
	printf("a is greatest.");
	if(b>a&&a>c)
	printf("b is greatest.");
	else
	printf("c is greatest.");
}