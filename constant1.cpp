#include <iostream>
using namespace std;

class demo
{
	public:
		int i;
		const int no;
		demo() : no(100) //member initlization
		{
			i=20;
			//no=100;

		}

};

int main()

{
	demo obj;
	cout<<obj.no<<"\n";
	cout<<obj.i<<"\n";
	return 0;
}