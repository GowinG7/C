//Write a program to display sum of each column of given matrix.

#include <stdio.h>
void main(){
	int a[10][10],i,j,row,column,sum=0;
	printf("Enter row:");
	scanf("%d",&row);
	printf("Enter column:");
	scanf("%d",&column);
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("Enter matrix element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The sum of each column of given matrix is:\n");
	for(j=0;j<column;j++){
		for(i=0;i<row;i++){
			sum=sum+a[i][j];
		}
		printf("\t %d \n",sum);
		sum=0;
}
} 