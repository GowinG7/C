// To print following pattern.
#include <stdio.h>
void main() {
	int i,j;
    char arr[] = "UNIVERSITY";
    for(i=0; i<10; i++) {
        for(j=0; j<=i; j++) {
            printf("%c ",arr[j]);
        }
        printf("\n");
    }
}
