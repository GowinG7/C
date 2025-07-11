
#include <stdio.h>
void main(){
	int i,j;
	for(i=1;i<=10;i++){
		for(j=2;j<=7;j++){
			printf("%dx%d=%d\t",j,i,i*j);
		}
		printf("\n");
	}
}