#include<stdio.h>
int main()
{

	int a=0;
	printf("Enter a number:");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("Given number is- %d And it is Even number\n",a);
	}
	else
	{

		printf("Given number is-%d And it is Odd number\n",a);
	}
	
	return 0;
}

