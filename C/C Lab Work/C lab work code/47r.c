//Write a C program to copy contents of student.txt file into another file called info.txt.

#include<stdio.h>
void main() {
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("student.txt", "w");
    fprintf(fp1, "Hi happy birthday lau tmro gift khai malae cake.txt\n");
    fclose(fp1);
    fp1 = fopen("student.txt", "r");
    fp2 = fopen("info.txt", "w");
    while ((ch = getc(fp1)) != EOF) {
        putc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Contents copied from student.txt to info.txt successfully.\n");
}
