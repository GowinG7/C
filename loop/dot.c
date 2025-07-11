#include <stdio.h>
void main(){
    float a,sum=0,x;
    printf("Enter the value of x:");
    scanf("%f",&x);
    for(a=1;a<=20;a++){
    sum=sum+((2+x)/a);
    if(a<=19){
    printf("(2+x)/%g,  ",a);
    }else{
    printf("(2+x)/%g.",a);
    }
    }
    printf (" Its total sum is %g",sum);
}