/* Write a C program using structure that reads the records of students with members roll,
name, address and marks and display the record of students who have obtained greater than
250 marks. */

#include <stdio.h>

void main() {
    struct student {
        int roll;
        char name[20];
        char address[20];
        float marks;
    };
    struct student st[100];
    int n, i;

    printf("Enter the total number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter roll number, name, address, and marks: ");
        scanf("%d %s %s %f", &st[i].roll, st[i].name, st[i].address, &st[i].marks);
    }

    printf("\nRoll number, Name, Address, and Marks (for students with marks > 250):\n\n\n");

    for (i = 0; i < n; i++) {
        if (st[i].marks > 250) {
            printf(" %d\t %s\t %s\t %.2f\n", st[i].roll, st[i].name, st[i].address, st[i].marks);
        }
    }
}
