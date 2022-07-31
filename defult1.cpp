#include<iostream>
using namespace std;
class demo
{
	public: 

	float area(float r,float pi=3.14)
	{
		float iAns;
		iAns=pi*r*r;
		cout<<"area of circle is:"<<iAns;
		return iAns;
	}

};
 int main(int argc, char const *argv[])
{
	demo obj;
	obj.area(11);
	return 0;
}