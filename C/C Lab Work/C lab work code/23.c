//Write a program to display sum of diagonal elements of 3x3 matrix. 

#include <stdio.h>
void main(){
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter matrix element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			if(i==j)
			sum=sum+a[i][j];
		}
	}
	printf("\nSum of diagonal elements=%d",sum);
}