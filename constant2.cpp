#include <iostream>
using namespace std;

class demo
{
	public:
		int i;
		const int no;
		demo():no(100)
		{
			i=20;
		}
		demo(int a,int b) :no(b)
		{
			i=a;
		}
};								

int main()

{
	demo obj1(11,21);
	cout<<obj1.no<<"\n";
	cout<<obj1.i<<"\n";
	obj1.i++;
	cout<<obj1.i<<"\n";
	return 0;
}