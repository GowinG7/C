// Write a program to display transpose of given mxn matrix. 
#include <stdio.h>
void main(){
	int n,m,i,j;
	printf("Enter the row of given matrix:\n");
	scanf("%d",&m);
	printf("Enter the column of given matrix:\n");
	scanf("%d",&n);
   int a[m][n];					//for matrix with order that m and n which is taken from user
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		printf("Enter the matrix element a[%d][%d]:",i,j);
    		scanf("%d",&a[i][j]);
			}
		}
	printf("Displaying matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		 	printf("\n");
	}
	printf("Displaying transpose of given matrix:\n");
	for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			printf("%d\t",a[i][j]);
		}
		 	printf("\n");
	}
	}