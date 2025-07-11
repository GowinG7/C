#include <stdio.h>
void main(){
    float a,sum=0,x;
    printf("Enter the value of x:");
    scanf("%f",&x);
    for(a=1;a<=20;a++){
    sum=sum+((2+x)/a);
    if(a<=19){
    printf("(2+x)/%g,  ",a); // %g prints float neatly: e.g., 5.000000 becomes 5, 0.00000123 becomes 1.23e-06

    }else{
    printf("(2+x)/%g.",a);
    }
    }
    printf (" Its total sum is %g",sum);
}
