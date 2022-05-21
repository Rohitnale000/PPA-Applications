#include <stdio.h>
int main(int argc, char const *argv[])
{
	int arr[3]={100,200,300,400};
	int max=arr[0];
	for (int i = 0; i < max; ++i)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
	}
	return 0;
}