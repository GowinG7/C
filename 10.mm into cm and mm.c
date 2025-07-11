#include <stdio.h>
#include <math.h>
void main(){
int w,x,y;
printf("Enter distance in millimeter:");
scanf("%d",&w);
x=w/10;
y=w-x*10;
printf("%d cm and %d mm.",x,y);
}
