#include <stdio.h>
void main(){
	float l,b,A,P;
	printf("Enter non-zero length:");
	scanf("%f",&l);
		printf("Enter non-zero breadth:");
	scanf("%f",&b);
	if((l!=0)&&(b!=0)){
		A=l*b;
		P=2*(l+b);
		printf("The area is %f unit square.\n The perimeter is %f unit.",A,P);
	}
	else{
		printf("Invalid input.");
		}
}
