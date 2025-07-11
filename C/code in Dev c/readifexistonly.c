// To read a file if exists.

#include <stdio.h>
void main(){
	FILE *fp;
	fp=fopen("two.txt","r");
	char my[100];
	while(fgets(my,100,fp)){
		printf("%s",my);
	}
	if(fp==NULL)
		printf("File doesnot exist.");
	fclose(fp);
}