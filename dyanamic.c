#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size=0;
    
    int *ptr=NULL;

	//ptr=(int *)malloc(100*sizeof(int));//malloc function
	
	ptr= (int *)calloc(5,sizeof(int));//calloc function

	ptr=realloc(ptr,20*sizeof(int));//realloc function

	if (ptr==NULL)
	{
		printf("not allow");
	}
	else
	{

		printf("succusses");
	}
	free(ptr);//free function
	return 0;
}
