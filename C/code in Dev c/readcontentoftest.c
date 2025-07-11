// To read the conent from the file.
#include <stdio.h>
void main(){
	FILE *fp;
	char my[100];
	fp=fopen("test.txt","r");
	while(fgets(my,sizeof(my),fp)!=NULL){
		printf("%s",my);
	}
	fclose(fp);
}