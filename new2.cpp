#include<iostream>
using namespace std;
class base
{
public:

	int i,j;
	static int k;

	base()
	{
		i=10;
		j=20;

	}
	void fun()
	{
		cout<<"inside base fun\n";
	}
};
int base::k=11;
class derived:public base
{
public:

	int x,y;
	derived()
	{
		x=50;
		y=60;

	}

	void gun()
		{
			cout<<"inside derived gun\n";
		}
};
int main()
{
	base bobj;
	derived dobj;

	cout<<sizeof(bobj)<<"\n";  //8
	cout<<sizeof(dobj)<<"\n";  //16
	cout<<bobj.i<<"\n";			//10
	cout<<bobj.j<<"\n";			//20
	cout<<dobj.i<<"\n";			//10
	cout<<dobj.j<<"\n";			//20
	cout<<bobj.k<<"\n";			//11
	cout<<dobj.x<<"\n";			//50


	bobj.fun();			//inside base fun
	dobj.fun();			//inside base fun
	dobj.gun();			//inside derived gun


	return 0;
}