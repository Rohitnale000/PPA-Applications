#include<iostream>
using namespace std;
class base
{
public:
	int x;
	int y;

	base()
	{
		 x=10;
		 y=11;
		cout<<"inside base \n";
	}

};

class base1:public base
{
	
public:
	int i,j;
	base1()
	{
		i=x;

		j=y;

		cout<<"inside base1 constructor\n";
	}

};
class derived:public base1
{
 
 public:
 	int k,l;
 	derived()

 	{
 		k=x;
 		l=y;
 		cout<<"inside derived constructor\n";
 	}


};

int main()
{
	//base1 obj;
	

	 derived obj1;

    cout<<"value of k is:"<<obj1.k<<"\n";
	cout<<"value of j is:"<<obj1.j<<"\n";
	cout<<"value of i is:"<<obj1.i<<"\n";
	cout<<"value of j is:"<<obj1.j;

	return 0;
}