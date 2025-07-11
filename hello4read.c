#include<stdio.h>
#include<string.h>
int main()
{
	char a[89];
	char b;
	
	FILE *pt;
	

	pt=fopen("hello4read.c","r");

	while(!feof(pt))
	{
	//fscanf(pt,"\n %s",a);
	//fgets(a,90,pt);
	b=fgetc(pt);
	putchar(b);
	//printf("\n %s", a);
	}
	fclose(pt);
}
