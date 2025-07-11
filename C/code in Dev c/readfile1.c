//To read a file.
 
#include <stdio.h>
void main(){
	FILE *fp;
fp=fopen("twob.txt","r");
char my_string[100];
while(fgets(my_string,100,fp)){
printf("%s",my_string);
}
fclose(fp);	
}