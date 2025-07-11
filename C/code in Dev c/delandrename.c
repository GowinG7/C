/* to delete and rename the file.(paila renam ani balla delete logic yo ho)

#include <stdio.h>
void main(){
	FILE *fp;
	char my[100];
	fp=fopen("filename.txt","w");
	printf("Enter the contents of file:\n");
	scanf("%s",my);
	fprintf(fp,"%s",my);
	fclose(fp);
	fp=fopen("filename.txt","r");
	printf("%s",my);
	fclose(fp);
	rename("filename.txt","Newfilename.txt");
	remove("Newfilename.txt");
} */

#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
FILE *fp;
fp=fopen("fil.txt","w");
printf("\nInput string: ");
fgets(str,sizeof(str),stdin);
fprintf(fp,"%s",str);
fclose(fp);
rename("fil.txt","newfil.txt"); /* rename the file name to 
newfil.txt */
//remove("newfil.txt"); /* removes(delete) file 
//newfil.txt */
getch();
}