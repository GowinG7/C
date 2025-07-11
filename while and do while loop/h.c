#include <stdio.h>
void main(){
    float n,i,sum;
    sum=0;
    printf("See last term and give input by removing all decimal 9 and give input as(eg: 0.000001):");
    scanf("%f",&n);
    for(i=0.1;i>=n;i=i*0.1){
        sum=sum + (1-i);
        printf("%g,  ",1-i);
    }
}