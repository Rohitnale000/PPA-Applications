#include<iostream>
using namespace std;

class demo
{

	public:
		
		
	demo()
	{
		
		cout<<"inside defult constructor\n";
	}

	demo(int a,int b)
	{
		cout<<"inside paramerterized constructor\n";
	}

	demo(demo &ref)
	{
		cout<<"inside copy constructor\n";
	}

};

int main()
{
	demo obj;
	demo obj1(12,11);
	demo obj2(obj1);
	return 0;
}