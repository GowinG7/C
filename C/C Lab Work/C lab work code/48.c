/* 48)Write a program to store stdno, name and mark of ‘n’ students in a data file. Display the 
records in appropriate format reading from the file.  */

#include <stdio.h>
struct Student {
    int stdno;
    char name[50];
    float mark;
};
void main() {
    FILE *file = fopen("student_data.txt", "w+");
    struct Student student;
    int n, i;
    printf("How many students are there: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter Student rollnumber, Name, and Mark: ");
        scanf("%d%s%f", &student.stdno,  student.name,  &student.mark);
        fwrite(&student, sizeof(student), 1, file);
    }
    rewind(file);
    printf("\nStudent Number\tName\tMark\n");
    while (fread(&student, sizeof(student), 1, file) == 1) {
        printf("%d\t%s\t%.2f\n", student.stdno, student.name, student.mark);
    }
    fclose(file);
}
