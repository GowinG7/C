#include <stdio.h>
void main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for (k=1;k<i;k++){
	printf("\t");
		}
		for(j=i;j<=5;j++){
			if(j%2==1)
			printf("1\t");
			else
			printf("0\t");
		}
		printf("\n");
	}
}