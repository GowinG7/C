// To display prime number between 100 and 200.
#include <stdio.h>
void main(){
	int i,j,count;
	printf("The prime number between 100 and 200 are:\n");
	for(i=100;i<=200;i++){
		count=0;
		for(j=1;j<=i;j++){
		if(i%j==0)
			count=count+1; 	
		}
		if(count==2)
			printf("%d \t",i);
}
}
