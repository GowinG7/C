#include<stdio.h>
void main(){
	float x,G;
	printf("Enter marks:");
	scanf("%f",&x);
	if(x<20){
		G=(x/100)*4;
		printf("Your grade point is %f and Grade:E Very insufficient.",G);
	}
	else
	if(x<30){
		G=(x/100)*4;
		printf("Your grade point is %f and Grade:D  Sufficient.",G);
	}
	else
	if(x<40){
		G=(x/100)*4;
		printf("Your grade point is %f and Grade:D+  Partially Acceptable.",G);
	}
	else
	if(x<50){
		G=(x/100)*4;
		printf("Your grade point is %f and Grade:C  Acceptable.",G);
	}
	else
	if(x<60){
		G=(x/100)*4;
		printf("Your grade point is %f and Grade:C+ Satisfactory.",G);
	}
	else
	if(x<70){
		G=(x/100)*4;
		printf("Your grade point is %f and Grade:B Good",G);
	}
	else
	if(x<80){
		G=(x/100)*4;
		printf("Your grade point is %f and Grade:B+  Very Good.",G);
	}
	else
	if(x<90){
		G=(x/100)*4;
		printf("Your grade point is %f and Grade:A  Excellent.",G);
	}
	else{
		G=(x/100)*4;
		printf("Your grade point is %f and Grade:A+  Outstanding.",G);
}
}
