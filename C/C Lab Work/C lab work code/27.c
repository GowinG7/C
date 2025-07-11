// Write a program to input n names and sort them in alphabetical order.

#include<stdio.h>
#include<string.h>
void main()
{
char name[100][15],temp[15];
int i,j,n;
printf("How many students are there\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter name of student\n");
scanf("%s",name[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmpi(name[i],name[j])>0)
{
strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp);
}
}
}
printf("\nNames in alphabetical order:\n");
for(i=0;i<n;i++)
{
printf("%s\n",name[i]);
}
}