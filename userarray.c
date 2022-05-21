#include<stdio.h>
  int main(int argc, char const *argv[])
{
	int iNo=0;

	printf("enter array:\n");

	scanf("%d",&iNo);

	int arr[iNo];

	for (int i = 0; i < iNo; ++i)
	{
		scanf("%d",&arr[i]);
	}
	printf("list of array is:\n");
	for (int i = 0; i < iNo; ++i)
	{
		printf("%d\n",arr[i]);
	}

	return 0;
}