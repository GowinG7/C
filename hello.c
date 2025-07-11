#include<stdio.h>
int main()
{
	float a,b,c;
	FILE *p;
	p=fopen("result.txt","w");
	printf("\n please enter first number");
	scanf("%f",&a);
	printf("\n please enter second number");
	scanf("%f",&b);
	c=a+b;
	printf("\n sum of \t%f +\t %f =\t%f",a,b,c);
	fprintf(p,"\n sum of \t%f +\t %f =\t%f",a,b,c);
	fclose(p);
	
	
}
