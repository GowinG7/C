#include <stdio.h>
void main() {
    float h, b;
	float A;
    printf("Enter the height and base of the triangle:\n");
    scanf("%f %f", &h, &b);
    A = 0.5 * b * h; 
    printf("The area of the triangle is %.2f square units.\n", A);
}
