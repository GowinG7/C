/* 46) Write a C program to write some text “Welcome to BCA program” in a file test.txt. */

#include <stdio.h>
void main() {   
FILE *file=fopen("test.txt","w");
 char text[]="Welcome to BCA program.";
 fprintf(file,"%s",text);
 fclose(file);
 printf("We have write text in file test.txt successfully.\n");
}