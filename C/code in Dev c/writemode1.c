// write mode

//To create a file.

#include <stdio.h>
void main(){
	FILE *fp;
fp=fopen("two.txt","w");
fprintf(fp,"Hi! This is me GG.What's your name?");
fclose(fp);
fp=fopen("two.txt","r");
char my[100];
while(fgets(my,100,fp))
    printf("%s",my);
fclose(fp);
}
