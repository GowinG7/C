// Print from 1-10. Condition: if odd add 1, if even subtract 1.

#include <stdio.h>


void num(int ); //function declaration

int main() {
    printf("The required numbers are:\n");
    int n=1;
	num(n); // num function call
    return 0;
}

void num(int n) {    // takes argument but return any value
    if (n <= 10) {
        if (n % 2 == 0) 
		{
            printf("%d ",n-1); // If even, subtract 1
        } 
		else
		 {
            printf("%d ",n+1); // If odd, add 1
         }
        num(++n); // Recursive call with increment of n
    }
}
