#include<iostream>
using namespace std;
class demo
{
    public:

	int add(int a, int b)
	{
		int iAns =0;
		iAns = a+b;
		return iAns;
	}

	int add(int a, int b,int c)
	{
		int iAns =0;
		iAns = a+b+c;
		return iAns;
	}

	int add(int a, int b , int c,int d)
	{
		int iAns =0;
		iAns = a+b+c+d;
		return iAns;
	}


};

int main()
{
	
	register int iRes=0;
	demo obj;
	iRes = obj.add(10,20);
	cout<<"result is:"<<iRes;
	iRes = obj.add(10,20,30);
	cout<<"result is:"<<iRes;
	return 0;
}
