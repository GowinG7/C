// To copy the content of one file to another file .

#include <stdio.h>
void main(){
	FILE *a , *b;
	a=fopen("sourcefile.txt","r");
	b=fopen("Destinationfile.txt","w");
	char my[100];
while(fgets(my,100,a)!=NULL){
fputs(my,b);
}
fclose(a);
fclose(b);
printf("Content copy successfully.");
}
