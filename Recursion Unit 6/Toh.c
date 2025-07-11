//  Program of toh(tower of hanoi)
/* Logic behind this program :
  1.move n-1 disks from source to temp using dest
  2.move remaining disk from source to dest 
  3.move n-1 disk from temp to dest using source  */

#include <stdio.h>
#include <math.h>
int toh(int ndisk,char source,char temp,char dest);
int main(){
	int n;
	char source='X';
	char temp='Y';
	char dest='Z';
	printf("Enter the number of disks:");
	scanf("%d",&n);
	if(n>0){
	
	int steps;
	steps=pow(2,n)-1;
	printf("\nThe number of steps required is %d , to solve table of hanoi.",steps);
	}
	toh(n,source,temp,dest);
	return;
}
int toh(int n,char source,char temp,char dest){
	if(n<=0)
	printf("\nThere must be at least one disk.");
	else if(n==1)
	printf("\n Move disk %d from %c-->%c",n,source,dest);
	else
	if(n>0){
		toh(n-1,source,dest,temp);
		printf("\n Move disk %d from %c-->%c",n,source,dest);
		toh(n-1,temp,source,dest);
	}
}