#include<stdio.h>
struct demo //structure delecration
{
  int a;

  float f;

  int b;

}struct demo obj1;//qucik delecration of sctructure

int main()
{
	struct demo obj;//structure object creation

	obj1.a=10;
	ob1.f=10.11;
	obj1.b=11;

	printf("%d\n", obj1.a);
	printf("%ld\n",sizeof(obj1.f));
	printf("%ld\n",&obj1);

	return 0;
}