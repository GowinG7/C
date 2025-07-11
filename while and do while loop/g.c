#include <stdio.h>
void main(){
    float n,i,sum;
    sum=0;
    printf("Please enter last term:");
    scanf("%f",&n);
    for(i=10;(1-i)<=n;i=i*10){
        sum=sum+(i-1);
        printf("%d,   ",i-1);
    }
    printf("The total sum is %g",sum);
}