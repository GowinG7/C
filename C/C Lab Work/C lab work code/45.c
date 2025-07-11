/* Write a C program to store the player name, runs scored, wickets taken of n cricketers using 
structure along with pointer then arrange the players in order of maximum wickets to 
minimum wickets they had taken. */

#include <stdio.h>
struct cricket
{
	int runs,wickets;
	char name[10];
};
void main(){
	int i,j,n;
	struct cricket c[100],*temp;
	struct cricket *ptr[100];
	printf("Enter total no. of Cricketers:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		ptr[i]=&c[i];
	}
	for(i=0;i<n;i++){
		printf("Enter name,runs scored and wickets taken by cricketers:");
		scanf("%s%d%d",c[i].name,&c[i].runs,&c[i].wickets);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(ptr[i]->wickets < ptr[j]->wickets){
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
		printf("\n sorted data in descending order:\n");
		for(i=0;i<n;i++){
			printf("%s\t %d\t %d\n",ptr[i]->name,ptr[i]->runs,ptr[i]->wickets);
		}
}
