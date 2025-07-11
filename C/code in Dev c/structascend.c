#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
struct student
{
char name[15];
int age;
};
struct student st[100],temp;
int i,j,n;
printf("How many students are there: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter student name and age: ");
scanf("%s%d",st[i].name,&st[i].age);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(st[i].name,st[j].name)>0)
{
temp=st[i];
st[i]=st[j];
st[j]=temp;
}
}
}
printf("\nName\tAge");
for(i=0;i<n;i++)
{
printf("\n%s\t%d",st[i].name,st[i].age);
}
getch();
}
