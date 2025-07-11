// Palindrome of a given number.

#include <stdio.h>
void main(){
	int n,rev,rem;
	printf("Enter a number:");
	scanf("%d",&n);
	int num=n;
	while(n>0){
		rem=n%10;
	rev=rev*10+rem;
	n=n/10;

	}
	if(num==rev)
	printf("%d is palindrome.",num);
	else
	printf("%d isn't palindrome",num);
}