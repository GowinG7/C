// To copy the content of one file to another.

#include <stdio.h>
void main(){
FILE *a,*b;
a=fopen("C:\\Users\\gobin\\OneDrive\\Desktop\\code in code blocks\\source.txt","r");
b=fopen("destination.txt","w");
char my[100];
while(fgets(my,100,a)!=NULL){
fputs(my,b);
}
printf("File copied successfully.");
fclose(a);
fclose(b);
}
