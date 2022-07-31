#include <iostream>
using namespace std;
class demo
{

 public:
 	int x;
 	int y;
   
   demo(int i,int j)
   {

   	  cout<<"inside demo constructor\n";

   }

};
int main()
{
	demo obj;
 cout<<obj(10,20);
}