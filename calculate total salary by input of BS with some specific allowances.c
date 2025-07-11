#include <stdio.h>
void main(){
	float bs,ta,da,hra,tax,ts;
	printf("Enter basic salary of an employee:");
	scanf("%f",&bs);
	if(bs<1000){
		ta=0;
		da=0;
		hra=100;
		tax=0;
	}
	else
	if (bs<2800)
	{
		ta=100;
		da=50;
		hra=100;
		tax=bs*0.01;
	}
	else
	if(bs<4900){
		ta=1250;
		da=100;
		hra=100;
		tax=bs*0.01;
	}
	else
	if(bs<8800)
	{
		ta=bs*0.01;
		da=500;
		hra=bs*0.01;
		tax=bs*0.02;
	}
	else{
		ta=bs*0.0125;
		da=1000;
		hra=bs*0.02;
		tax=bs*0.022;
	}
	ts=bs+ta+da+hra-tax;
	printf("Your total salary is %f.",ts);
}
