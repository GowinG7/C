#include <stdio.h>
void main(){
	float a,b,c,S,A;
	printf("Enter a +ve number greater than 10:");
	scanf("%f",&a);
	printf("Enter another +ve number greater than 10:");
	scanf("%f",&b);
	printf("Enter another +ve number greater than 10:");
	scanf("%f",&c);
	if(((a>0)&&(a>10))&&((b>0)&&(b>10))&&(c>0)&&(c>10)){
	}
		S=a+b+c;
		A=S/3;
		printf("The sum is %f.\n The average is %f.",S,A);
	}
	else{
		printf("Invalid input");
	}
}
