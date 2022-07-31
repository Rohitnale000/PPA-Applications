#include<iostream>
using namespace std;
class hello
{
public:
	int x;
	int y;
	int z;

	hello()
	{
		cout<<"inside defult \n";
		x=0;
		y=0;
		z=0;
	}
	void fun()
	{
		cout<<"inside fun";
	}
	
};

int main()
{
   //hello obj;
   hello *p = NULL;
   p= new hello;



   if (p==NULL)
   {
   	 cout<<"not allocate";
   }
   else
   {
   	cout<<"allocate";
   }



   p->fun();

	return 0;
}