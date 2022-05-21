#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a=3;
	int b= a++ + ++a + a++ + ++a;
	printf("%d\n",b );
	return 0;
}