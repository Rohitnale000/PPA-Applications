#include<iostream>
using namespace std;
class base
{
public:
	int i,j;
	base()
	{
		cout<<"inside base constructor"<<"\n";
	}
	~base()
	{
		cout<<"inside base destructor"<<"\n";
	}
};
class derived :public base
{
public:
	int x,y;

	derived()
	{
		cout<<"inside derived constructor\n";
	}
	~derived()
	{
		cout<<"inside derived destructor\n";
	}
};
class derived1:public derived
{
	public:
		int k,l;

	derived1()
	{
		cout<<"inside derived1 constructor\n";
	}
	~derived1()
	{
		cout<<"inside derived1 destructor\n";
	}
};
int main(int argc, char const *argv[])
{
	derived1 obj;

	return 0;
}