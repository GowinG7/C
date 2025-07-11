#include <stdio.h>
void main(){
	int R,P,K;
	printf("Enter paisa:");
	scanf("%d",&P);
	R=P/100;
	K=P%100;
	printf("%d rupees %d paisa",R,K);
}
