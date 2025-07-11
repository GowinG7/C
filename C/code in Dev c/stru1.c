// WAP to read roll no,name and age of n students and display the record of students in ascending order on the basis of name.

#include <stdio.h>
#include <string.h>
void main(){
	struct student
	{
		int roll;
		char name[20];
		int age;
	};
	struct student st[100],temp;
	int i,j,n;
	printf("Enter the number of student:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the roll,name and age of student:\n");
		scanf("%d %s %d",&st[i].roll,st[i].name,&st[i].age);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmpi(st[i].name,st[j].name)>0){
		temp=st[i];
		st[i]=st[j];
		st[j]=temp;
			}
		}
	}
	printf("Displaying the record of student in ascending order on the basis of name:\n");
	printf("\n rollno \t name\t age\t");
	for(i=0;i<n;i++){
		printf("\n %d \t %s\t %d\t",st[i].roll,st[i].name,st[i].age);
	}
}

