// 0,1,1,2,3,5,8,13..... Fibonacci series.
#include <stdio.h>
void main(){
int a=0,b=1,c,i,n;
printf("Enter the number of terms of series:	");
scanf("%d",&n);
printf("\n The fibonacci series is:\n");
printf("%d\t %d\t",a,b);
for(i=1;i<=n-2;i++){
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
}
}
