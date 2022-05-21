#include <stdio.h>

int addition(int a,int b)
{
   
   int ans = 0;
   ans = a+b;

   return ans;


}


int main(int argc, char const *argv[])
{
	int no1=10;
	int no2=11;

	int ret= no1+no2;
	int(*p)(int,int);
	p= addition;
	printf("address is :%d\n",addition);
	ret = p(no1,no2);
	printf("%d\n",ret );
	return 0;
}