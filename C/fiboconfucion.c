#include <stdio.h>

int fibo(int num) {
    if (num == 0 || num == 1)
        return num;
    else
        return (fibo(num - 1) + fibo(num - 2));
}

void main() {
    int i, n;
    printf("Enter the number of terms in fibonacci series: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("The %d term of fibonacci series is: %d\n", i, fibo(i));
    }
}
