#include <stdio.h>
int main(int argc, char const *argv[])
{
	int arr[]={10,20,30,40};
	int *p=arr;
	int  *q= arr+1;
	int ans = *q-*p;
	printf("%d\n",*q);
	return 0;
}