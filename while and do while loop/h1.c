#include <stdio.h>
void main(){
    float n,j,k=0.9;
    printf("Enter a number of terms:");
    scanf("%f",&n);
    for(j=1;j<=1;j++){
        printf("%f,  ",k);
        k=k+0.9/(pow(10,j));
    }
}