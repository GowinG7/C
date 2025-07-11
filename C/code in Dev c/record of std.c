/* Write a program to write name, symbolno and address of ‘n’ students into a file named 
“student.txt” and display the record of students in appropriate format. */

#include <stdio.h>

typedef struct {
    int stdrllno;
    char name[50];
    int mark;
} Student;

int main() {
    FILE *file;
    Student students[100];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter student roll number, name and mark of student %d: ", i+1);
        scanf("%d %s %d", &students[i].stdrllno, students[i].name, &students[i].mark);
    }

    file = fopen("student_data.txt", "w");
    if(file == NULL) {
        printf("Unable to create file.\n");
        return 0;
    }

    for(i = 0; i < n; i++) {
        fprintf(file, "%d %s %d\n", students[i].stdrllno, students[i].name, students[i].mark);
    }
    fclose(file);

    file = fopen("student_data.txt", "r");
    if(file == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }

    printf("\nStudent Records:\n");
    for(i = 0; i < n; i++) {
        fscanf(file, "%d %s %d", &students[i].stdrllno, students[i].name, &students[i].mark);
        printf("Student Number: %d, Name: %s, Mark: %d\n", students[i].stdrllno, students[i].name, students[i].mark);
    }
    fclose(file);

    return 0;
}
