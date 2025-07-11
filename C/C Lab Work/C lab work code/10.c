#include <stdio.h>
void main(){
	int i,a=1;
	printf("The ten terms of sequence are:\n");
	for(i=1;i<=10;i++){
		printf("%d\t",a);
		a=a+4;
	}
}