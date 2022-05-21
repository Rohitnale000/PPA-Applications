#include<stdio.h>


struct demo//structure declaration
{
	int i;
	float f;
};

int main()
{

	struct demo obj;//object creation
	

	struct demo *p =&obj;

	p->i=10;
	p->f=11.12;

	printf("%d\n",(p->i));//10
	printf("%d\n",p );//address of struct demo obj
	printf("%d\n",&obj );//address of struct demo obj
	printf("%f\n",(p->f) );//11.12
	printf("%d\n",&(p->f));//adress of float 
	printf("%d\n",&(p->i));//adress of integer
	printf("%d\n",sizeof(p));//8
	printf("%d\n",sizeof(p->i));//size of integer
	return 0;
}