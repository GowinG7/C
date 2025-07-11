#include <stdio.h>
void main(){
	float X,TA,DA,HRA,T,Totalsalary;
	printf("Enter basic salary of an employee:");
	scanf("%f",&X);
	if(X<1000){
		TA=0;
		DA=0;
		HRA=100;
		T=0;
	}
	else
	if(X<2800){
		TA=100;
		DA=50;
		HRA=100;
		T=0.01*X;
	}
	else
	if(X<4900){
		TA=125;
		DA=100;
		HRA=100;
		T=0.01*X;
	}
	else
	if(X<8800){
		TA=0.01*X;
		DA=500;
		HRA=0.01*X;
		T=0.02*X;
	}
	else{
		TA=0.0125*X;
		DA=1000;
		HRA=0.02*X;
		T=0.0221*X;
	}
	Totalsalary=X+TA+DA+HRA-T;
	printf("Your total salary is Rs.%f.",Totalsalary);
}
