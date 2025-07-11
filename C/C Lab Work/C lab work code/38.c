// Write a program to find sum of 10 numbers using pointer.

#include <stdio.h>
void main() {
    int a[10];
    int *ptr =a; // Pointer to the array
    int sum=0,i;
    printf("Enter any 10 numbers:\n");
    // Input 10 numbers
    for(i=0;i<10;i++) {
        printf("\nEnter number according to index [%d]: ",i);
        scanf("%d",ptr);
        sum=sum + *ptr; // Add the number to the sum
        ptr++; // Move the pointer to the next element
    }
    printf("\n Sum of the 10 numbers is: %d\n", sum);
}
