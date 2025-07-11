/* 44) Write a C program to enter id, title, price, pages of n book into structure variable called 
book and sort them in descending order on the basis of their title with use of pointer. */

#include <stdio.h>
#include <string.h>
struct Bookdetails{
	int price,pages;
	char title[20],id[15];
};
void main(){
	int i,j,n;
	struct Bookdetails book[100],*temp;
	struct Bookdetails *ptr[100];
	printf("Number of books:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		ptr[i]=&book[i];
	}
	for(i=0;i<n;i++){
		printf("Enter id,title,price and pages of books:");
		scanf("%s%s%d%d",book[i].id,book[i].title,&book[i].price,&book[i].pages);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmpi(ptr[i]->title,ptr[j]->title)<0){
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	printf("\n Sorted data in descending order:\n");
	for(i=0;i<n;i++){
		printf("%s\t %s\t %d\n",ptr[i]->id,ptr[i]->title,ptr[i]->price,ptr[i]->pages);
	}
}