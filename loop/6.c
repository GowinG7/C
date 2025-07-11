#include <stdio.h>
void main(){
    int x;
    do{
        printf("Enter a number between 100 to 200:");
        scanf("%d",&x);
        if((x>100)&&(x<200))
        printf("The number is %d",x);
        else
        printf("Please input valid number.");
        break;
    }while((x>100)&&(x<200));
}