#include<stdio.h>
#include<stdlib.h>

int main()
{
	double no=3.14;
	double *a=&no;
	double **b=&a;
	double ***c=&b;
	double ****d=&c;

	printf("%d\n",sizeof(*a));

	return 0;
}