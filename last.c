#include <stdio.h>
void main(){
	float x,salary,c,t;
	printf("Enter sales of an employee:");
	scanf("%f",&x);
	if(x<1000){
		c=0;
		t=0;
	}
	else
	if (x<9000){
		c=0.01*x;
		t=100;
	}
	else
if(x<18080){
	c=0.02*x;
	t=0.01*x;
}
else
if (x<29000){
	c=0.0225*x;
	t=0.0125*x;
}
else
{
	c=0.05*x;
	t=0.0139*x;
}
salary=x+c-t;
printf("Your salary is Rs.%f",salary);
}
	
