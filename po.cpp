#include<iostream>
using namespace std;
class demo
{
public:
	void fun(int *p)
	{
		cout<<"first\n";

	}
	void fun(float *p)
	{
		cout<<"secound\n";
	}
	void fun(int no)
	{
		cout<<"third\n";
	}
};
int main(int argc, char const *argv[])
{
	int no=11;
	float f=3.14;
	demo obj;
	obj.fun(no); //third
	obj.fun(&no);// first
	obj.fun(&f);//secound
	return 0;
}