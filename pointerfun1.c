#include <stdio.h>
void fun(int a,int b)
{
	a=10;
	b=10;
	int ans=a+b;
	
	printf("%d\n",ans );

}
int main(int argc, char const *argv[])
{

	void *p=NULL;
	p=fun;
    int w = (int *)fun;
    printf("%d\n",w );
	return 0;
}