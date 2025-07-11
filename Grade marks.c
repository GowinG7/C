#include <stdio.h>
void main(){
	float m;
	printf("Enter obtained marks:");
	scanf("%f",&m);
	if(m<=10){
		printf("Grade:E and Grade point:0.8");
	}
	else
	if (m<=20){
 printf("Grade:E+ and Grade point:0.8");
	}
	else
	if (m<=30){
 printf("Grade:D and Grade point:1.2");
	}
		else
	if (m<=40){
 printf("Grade:D+ and Grade point:1.6");
	}
		else
	if (m<=50){
 printf("Grade:C and Grade point:2.0");
	}
		else
	if (m<=60){
 printf("Grade:C+ and Grade point:2.4");
	}
		else
	if (m<=70){
 printf("Grade:B and Grade point:2.8");
	}
		else
	if (m<=80){
 printf("Grade:B+ and Grade point:3.2");
	}
		else
	if (m<=90){
 printf("Grade:A and Grade point:3.6");
	}
	else{
		printf("A+ and Grade point:4.0");
	}
	
}
