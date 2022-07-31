#include<iostream>
using namespace std;
class demo
{
	public:
	void hello()
	{

		cout<<"Rohit\n";
		hello(); //recursion
	}
};
int main()
{
	
	demo obj;
	obj.hello();
	return 0;
}