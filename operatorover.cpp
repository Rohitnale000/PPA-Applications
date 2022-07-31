#include<iostream>
using namespace std;
class demo
{
 	public:
 		int x;
 		int y;

 		demo(int i,int j)
 		{
 			x=i;
 			y=j;
 		}
};
//demo operator +(demo op1,demo op2)
//{
	//return demo(op1.x+op2.x,op2.y+op2.y);

//}
int main(int argc, char const *argv[])
{
	demo obj1(11,21);

	demo obj2(51,101);

	int k=0;

	k=obj1.x+obj2.x;
	cout<<k<<"\n";
	k=obj1.x+obj2.y;
	cout<<k<<"\n";
	return 0;
}