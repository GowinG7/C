#include <stdio.h>
void main(){
	int a,b,c,e;
	printf("Enter distance in centimeter:");
	scanf("%d",&a);
	b=a/1000;
	c=(a-b*1000)/100;
	e=a-b*1000-c*100;
printf("%d km,%d m and %d cm.",b,c,e);
}
