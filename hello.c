#include<stdio.h>

void fun(int a,int b)
{

	register int ret =0;
	ret = a+b;

	printf("%d\n",ret );


}