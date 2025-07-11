//Write a C program to find the sum of two matrix of order m×n.

#include <stdio.h>
void main(){
int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2;
again:
printf("Order of first matrix:");
scanf("%d%d",&r1,&c1);
printf("Order of second matrix:");
scanf("%d%d",&r2,&c2);
if(r1==r2 &&c1==c2){
	printf("\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("Enter matrix element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("Enter matrix element a[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
printf("\n Displaying sum of two matrix:\n");
for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
			}
		printf("\n");
	}
}
else{
printf(" Cannot perform sum operation.So again give order.\n");
goto again;
}
}


