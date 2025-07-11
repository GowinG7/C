#include <stdio.h>
void main(){
	int i,j;
	char str[]="UNIVERSITY";
	for(i=0;i<10;i++){
		for(j=0;j<=i;j++){
			printf("%c",str[j]);
			printf("\t");
		}
		printf("\n");
	}
	
}