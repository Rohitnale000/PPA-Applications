#include<iostream>
using namespace std;

class Base
{

public:

		int add(int iNo1,int iNo2)
		{
			int iAns=0;

			iAns = iNo1 + iNo2;

			return iAns;


		}

		virtual int sub(int iNum1,int iNum2)=0;  //pure virtual fuaction

};

class derived : public Base					// at least single-level inheritance
{

public:

		int sub(int a,int b)
		{
			int ans=0;

			ans = a-b;

			return ans;
		}

};

int main(int argc, char const *argv[])
{

	Base *bp = NULL;

	derived obj;


	bp = &obj;  //Upcasting concept

	int iRet=0;
	iRet = obj.add(10,20);

	cout<<"Addition is: "<<iRet<<"\n";

	iRet = obj.sub(30,20);

	cout<<"substraction is: "<<iRet<<"\n";

	
	return 0;
}