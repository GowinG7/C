#include <stdio.h>
void main(){
	FILE *fp;
	char my[200];
	fp=fopen("one.txt","r");
	while(fgets(my,100,fp)){
	printf("%s",my);
}
}