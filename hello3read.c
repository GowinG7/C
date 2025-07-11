#include<stdio.h>
int main()
{
	char name[44], address[43];
	FILE *pt;
	
//	printf("\n please enter number of student");
//	scanf("%d",&n);
	pt=fopen("record.dat","r");

//	for(i=1;i<=n;i++)
	while(!feof(pt))
	{
	//printf("\n  please enter name");
	//scanf("%s", name);
	//printf("\n  please enter address");
	//scanf("%s", address);
	fscanf(pt,"\n %s %s", name, address);
	printf("\n %s %s", name, address);
	}
	fclose(pt);
}
