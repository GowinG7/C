#include <stdio.h>
void main(){
    int i;
    char b[20];
char a[20]="you are awesome";
printf("you ");
printf("do ! know");
for(i=0;i<10;i++){
if(i==1){
printf("%s  ",a);
}

 if(i==2){
 printf("\n what's your opinion??:");
     fgets(b,sizeof(b),stdin);
printf("%s",b);
}
if(i==3){
printf("\n if any query, mentioned it????");
}
}

printf("\nThank you for response.??"); 
}
