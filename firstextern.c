#include <stdio.h>

extern int no; //declaration of vairiable

int main(int argc, char const *argv[])
{

	//extern int no;
	printf("%d\n",no );
	return 0;
}

//we have to access external variable both locally and also globally