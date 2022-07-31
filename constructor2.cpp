#include<iostream>
using namespace std;
class demo
{

public:
int x;
int y;

demo()
{
	cout<<"inside defult\n";
	x=10;
	y=0;
}
demo(int i,int j)
{
 
 cout<<"inside para\n";
 x=i;
 y=j;

}
demo(demo &ref)
{

 cout<<"inside copy\n";
 x= ref.x;
 y= ref.y;

}
 ~demo()
 {
 	cout<<"inside dest\n";
 }
void display()
{
	 cout<<"value of x"<<x<<endl;
 cout<<"value of y"<<y<<endl;
}
	
};

int main()

{
	demo obj;
   
   cout<<obj.x++;

	demo obj2(obj);
	
     
	
	return 0;
}