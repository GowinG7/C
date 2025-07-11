//create source file
#include <stdio.h>
void main(){
FILE *fp;
fp=fopen("source.txt","w");
fprintf(fp,"Hi! It's me GG and what's your name?");
if(fp!=NULL)
    printf("We have create and write in source file successfully.");
}
