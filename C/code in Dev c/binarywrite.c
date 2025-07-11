// binary mode write content

#include <stdio.h>
void main(){
	FILE *fp;
	fp=fopen("twob.bin","wb");
	char my[]="Hi! Who are you? DO I know you?";
	fwrite(my,sizeof(char),sizeof(my),fp);
	fclose(fp);
}