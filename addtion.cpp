#include<iostream>
using namespace std;
class demo

{

public:

	demo(int a,int b=10)
	{
		int result;
		result=a+b;
		cout<<"addtion is: "<<result;
		
	}
	void sub(int k,int l)
	{
		int result;
		result=k-l;
		cout<<"substraction is: "<<result;	
	}

};

int main(int argc, char const *argv[])

{
	int iValue1,iValue2;
	cout<<"enter first number"<<"\n";
	cin>>iValue1;
	cout<<"enter first number"<<"\n";
	cin>>iValue2;
	demo obj1(iValue1,iValue2);
	obj1.sub(iValue1,iValue2);
	
	return 0;
}