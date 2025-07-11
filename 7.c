#include <stdio.h>
void main(){
	int P,R,K;
	printf("Enter paisa:");
	scanf("%d",&P);
	R=P/100;
	K=P-R*100;
	printf("%d rupees %d paisa.",R,K);
}
