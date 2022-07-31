#include<iostream>
using namespace std;

template<class T>

class Arithmatic
{
public:

	T iNo1;
	T iNo2;

	Arithmatic(T a,T b)
	{
		iNo1 =a;
		iNo2 = b;

	}

	T Addition()
	{
		T iAns;
		iAns = iNo1 + iNo2;
		return iAns;
	}
	
	T Substraction()
	{
		T iAns;
		iAns = iNo1 - iNo2;
		return iAns;
	}
};


int main(int argc, char const *argv[])
{
	
		Arithmatic <int>iobj(10,11);
		int ret = iobj.Addition();
		cout<<"addition is:"<<ret<<"\n";

		Arithmatic <double>dobj(10.11,11.12);
		double dret = dobj.Addition();
		cout<<"addition is:"<<dret<<"\n";


	return 0;
}