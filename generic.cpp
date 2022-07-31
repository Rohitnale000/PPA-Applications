#include<iostream>
using namespace std;


template<class T>
T Addition(T iNo1,T iNo2)
{
	T iAns=0;
	iAns = iNo1+iNo2;
	return iAns;
}


int main(int argc, char const *argv[])
{
	int x=10,y=11,ret=0;
	ret = Addition(x,y);
	cout<<"addition is:"<<ret<<"\n";

	float a=10.8,b=11.5,fret=0.0;
	fret = Addition(a,b);
	cout<<"addition is:"<<fret<<"\n";

	double d1=17.11,d2=13.12,dret=0.0;
	dret = Addition(d1,d2);
	cout<<"addition is:"<<dret<<"\n";

	

	return 0;
}