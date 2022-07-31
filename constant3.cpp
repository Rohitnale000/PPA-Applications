#include<iostream>
using namespace std;
class demo
{
public:
	int i;
	const int j;
	demo(int a,int b):j(122)
	{
		cout<<j;
		i=a;
	}
	void fun()
	{
		cout<<"inside normalfunction\n";
		i++;
		//j++; not allowed
	}
	void gun() const
	{
		cout<<"inside constant function\n";
		//i++;
		//j++;
	}

};
int main(int argc, char const *argv[])
{
	demo obj(11,21);
	obj.fun();
	cout<<obj.i<<"\n";
	return 0;
}