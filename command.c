#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int iAns=0;
	printf("name of executiable is:%s\n",argv[0]);
	printf("Number of command line argument are:%d\n",argc);

	
	iAns =  atoi(argv[1])+atoi(argv[2]);
	printf("addition is :%d\n",iAns);

	return 0;
}