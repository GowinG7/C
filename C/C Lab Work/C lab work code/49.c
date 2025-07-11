/* 49) Write a C program to accept n numbers from user and store them in odd.txt file (if number 
is odd) or even.txt file (if number is even) then display odd numbers reading from odd.dat 
file. */

#include <stdio.h>
void main() {
    FILE *evenFile = fopen("even.txt", "w");
    FILE *oddFile = fopen("odd.txt", "w");
    int n,i, num;
    printf("Enter the number of elements to be stored: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num); 
        } else {
            fprintf(oddFile, "%d\n", num);  
        }
    }
    fclose(evenFile);
    fclose(oddFile);
    oddFile = fopen("odd.txt", "r");
    if (oddFile == NULL) {
        printf("Unable to open odd.txt.\n");
    }
    printf("Odd numbers from odd.txt:\n");
    while (fscanf(oddFile, "%d", &num) != EOF) {
        printf("%d\n", num);
    }
    fclose(oddFile);
}
