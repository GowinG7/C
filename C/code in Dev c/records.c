/*WAP in C to open a file named "student.dat" to keep the records of students(s_id,s_name,s_address) in a write mode and perform the following operations:
 1)Insert records into that file. 
 2)Display all those records for which s_id is greater than 2000. */
 
 #include <stdio.h>

struct student {
    int s_id;
    char s_name[50];
    char s_address[100];
} 
void main() {
    FILE *file;
    struct student st;
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter student ID, name and address of student %d: ", i+1);
        scanf("%d %s %s", &st[i].s_id, st[i].s_name, st[i].s_address);
    }

    file = fopen("student.dat", "w");
    if(file == NULL) {
        printf("Unable to create file.\n");
        return 0;
    }

    for(i = 0; i < n; i++) {
        fprintf(file, "%d %s %s\n", st[i].s_id, st[i].s_name, st[i].s_address);
    }
    fclose(file);

    file = fopen("student.dat", "r");
    if(file == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }

    printf("\nStudent Records with ID greater than 2000:\n");
    for(i = 0; i < n; i++) {
        fscanf(file, "%d %s %s", &st[i].s_id, st[i].s_name, st[i].s_address);
        if(students[i].s_id > 2000) {
            printf("Student ID: %d, Name: %s, Address: %s\n", st[i].s_id, st[i].s_name, st[i].s_address);
        }
    }
    fclose(file);
}
