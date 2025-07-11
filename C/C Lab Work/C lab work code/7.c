#include <stdio.h>
void main(){
	int num;
	again:
	printf("\nEnter only non-decimal positive number:");
	scanf("%d",&num);
	if(num%5==0 && num%7!=0)
		printf("\nGiven number %d is exactly divisible by 5 but not by 7.\n",num);
		else{
	printf("Required condition isnot match so.\n");
	goto again;
}
}