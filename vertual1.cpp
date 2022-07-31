#include<iostream>
using namespace std;
class base
{
public:
	int x;
	int y;

	virtual void fun() //defination
	{
		cout<<"inside base fun\n";
	}
	void fun(int a) //overloaded defination
	{
		cout<<"inside para base fun\n";
	}
	void gun()
	{
		cout<<"inside base gun\n";
	}
	virtual void sun()
	{
		cout<<"inside base sun\n";
	}
};

class derived:public base
{
public:
	void fun()//Redefination
	{
		cout<<"inside derived fun\n";
	}
	void sun()
	{
		cout<<"inside derived sun\n";
	}
};
int main()
{
	base *dp=new derived;  //upcasting 
	dp->fun();
	dp->gun();
	dp->sun();
	dp->fun(11);

	cout<<sizeof(base)<<"\n";
	cout<<sizeof(derived)<<"\n";
	

	return 0;
}