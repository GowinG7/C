//Prime or composite.
#include <stdio.h>
void main(){
	int x,i,count=0;
	printf("Enter a positve number <1:");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		if(x%i==0)
			count=count+1; //don't use count=count++ instead use count++
		}
		if(count>2)
		printf("Given number %d is Composite.",x);
		else if(count==2)
		printf("Given number %d is prime.",x);
	}
