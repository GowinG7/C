#include <stdio.h>
void main(){
	float a,b,c,S;
	printf("Enter first nuumber greater than 20:");
	scanf("%f",&a);
		printf("Enter second nuumber greater than 20:");
	scanf("%f",&b);
		printf("Enter third nuumber less than 5:");
	scanf("%f",&c);
	if(((a>20)&&(b>20))&&(c<5)){
		S=a+b+c;
		printf("Your sum is %f.",S);
	}else{
		printf("Invalid input.");
	}
}
