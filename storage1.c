#include<stdio.h>
static int x;//global static variable
void Demo()
{
  auto int A = 10;

  A++;


  printf("%d\n",A);

}

void Hello()
{
  static int A = 10;//local static variable
  
  A++; // increment valu of A

  printf("%d\n",A);
}
void demo1()
{
	x++;// increment valu of X


	printf("%d\n", x);
}

int main()
{
	Demo();//fuction call
	Demo();//fuction call
	demo1();//fuction call
	demo1();//fuction call
	Hello();//fuction call
	Hello();//fuction call
	return 0;
}