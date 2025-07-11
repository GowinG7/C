#include <stdio.h>
#include <math.h>
void main()
{
	float p,q,r,K;
	printf("Enter p:");
	scanf("%f",&p);
	printf("Enter q:");
	scanf("%f",&q);
	printf("Enter r:");
	scanf("%f",&r);
K=((pow(p,2)+pow(q,2))/(p-q+r))+(p/q);
	printf("The results is%f",K);
}
