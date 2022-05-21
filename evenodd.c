#include<stdio.h>
int main()
{
	int c=0;
	auto int b=0;
    
    printf("Enter no\n");
    scanf("%d",&c);

    b = demo(c);
    if (b==1)
    {
    	printf("Even number\n");
    }
    else
    {

    	printf(" Odd number\n");
    }



    
	return 0;
}

int demo(int a)
{

	register int output=0;

	if (a%2==0)
	{
		output=1;
	}
	else
	{

		output=0;
	}

   return output;

}