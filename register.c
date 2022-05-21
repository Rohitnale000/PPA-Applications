#include <stdio.h>
//register int a = 10;//we can not access that  variable becuse of global declaration.
int main()
{
	register int a = 10;
	printf("%d\n",a);

	return 0;

}