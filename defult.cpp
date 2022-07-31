#include <iostream> 
using namespace std;

float circle(float r,float pi=3.14)
{
  float iAns=0;
  iAns = pi*r*r;
  return iAns;
}

int main(int argc, char const *argv[])
{
	float iRes=0;
	float a=0;

	cout<<"enter a redius of circle:";
	cin>>a;

	iRes= circle(a);
	cout<<"area of circle is:"<<iRes;
	return 0;
}