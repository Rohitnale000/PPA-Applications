#include<iostream>
using namespace std;
class demo
{
public:
	int a=100;
	int b=200;

	int fun()
	{
		int iAns;
		iAns=a+b;
		cout<<iAns;
		return iAns;
	}

	 
};

int main(int argc, char const *argv[])
{
	demo obj;
	obj.fun();
	return 0;
}