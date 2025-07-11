/* menu driven program:
1.sum of first 20 odd number.
2.converting string into lowercase.
3.multiplication table of given number.
*/

#include <stdio.h>
#include <string.h>
void main(){
int x;
int i,num=1,sum=0;
char a[20];
int k;
printf("To find sum of first 20 odd number choose option 1:");
printf("\n To convert string into lowercase choose option 2:");
printf("\n To find multiplication table choose option 3:\n");

scanf("%d",&x);
switch(x){
	case 1:
		for(i=1;i<=20;i++){
			sum=sum+num;
			num=num+2;
		}
		printf("The sum of first 20 odd nuber is %d.",sum);
break;
    case 2:
    	printf("Enter the string:");
    	getchar();
    	fgets(a,sizeof(a),stdin);
    	strlwr(a);
    	printf("%s ",a);
    	break;
    case 3:
    	printf("Enter the number for multiplication table:");
    	scanf("%d",&k);
    	for(i=1;i<=10;i++){
    		printf(" %d x %d = %d \n",k,i,k*i);
		}
		break;
		
	default:
		printf("Thank you.");
}
}