//To create a file.
 
#include <stdio.h>
void main(){
	FILE *fp;
fp=fopen("one.txt","w");
fclose(fp);	
}