#include <stdio.h>
void main(){
	int i,even;
	even=0;
	for(i=2;i<=20;i=i+2){
		even=even+i;
		printf("%d",even);
	}
}