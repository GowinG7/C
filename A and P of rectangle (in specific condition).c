#include <stdio.h>
void main(){
	float l,b,A,P;
	printf("Enter length between 15 and 20:");
	scanf("%f",&l);
		printf("Enter breadth 1 and 11:");
	scanf("%f",&b);
	if(((l>15)&&(l<20))&&((b>1)&&(b<11))){
		A=l*b;
		P=2*(l+b);
		printf("The area of rectangle is %f unit square.\n The perimeter of rectangle is %f unit.",A,P);
	}
	else{
		printf("Invalid input.");
		}
}
