#include<stdio.h>
int main()
{
	char name[44], address[43];
	FILE *pt;
	int n,i;
	printf("\n please enter number of student");
	scanf("%d",&n);
	
	pt=fopen("record.dat","w");
	for(i=1;i<=n;i++)
	{
	printf("\n  please enter name");
	scanf("%s", name);
	printf("\n  please enter address");
	scanf("%s", address);
	printf("\n %s %s", name, address);
	fprintf(pt,"\n %s %s", name, address);
	}
	fclose(pt);
}
