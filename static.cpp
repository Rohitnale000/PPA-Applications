#include<iostream>
using namespace std;
class demo
{

public:
	int a;
	int b;
	int c;
	static int k;

	demo(int i,int j=30)
	{
		a=i;
		b=j;
		cout<<"inside parameterized constructor\n";
		c=a+b;
		cout<<"addtion is:"<<c<<"\n";
	}
	static int fun(int p,int q)
	{
		static int z=100;
		cout<<"\n"<<z<<"\n";
		int iAns;
		iAns=p+q;
		return iAns;

	}

};


int main()
{
	demo obj(20);
	cout<<obj.fun(11,30)<<"\n";
	//cout<<demo::k<<"\n";
	cout<<demo::fun(10,11);

	return 0;
}