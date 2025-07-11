#include <stdio.h>
void main(){
    int a,x;
    printf("Please enter last number:");
    scanf("%d",&x);
    for(a=2;a<=x-2;a=a+2){
      printf("%d, ",a);
    }
    if(a==x)
    printf("%d.",a);
}