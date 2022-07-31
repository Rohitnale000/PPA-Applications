#include<iostream>
using namespace std;
class demo
{
	public:

	void fun(int *p)
	{
		cout<<"inside first defination"<<"\n";
	}

	void fun(float *p)
	{
		cout<<"inside secound defination"<<"\n";	
	}

	void fun(int no)
	{
		cout<<"inside third defination"<<"\n";	
	}

};

int main()
{
	int no=11;
	float f=3.14;
	demo obj;
	obj.fun(&no);
	obj.fun(no);
	obj.fun(&f);
	return 0;
}