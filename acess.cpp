#include<iostream>
using namespace std;

class Demo
{
public:

	int x=10;

private:

	int y=20;

protected:

	int z=30;

public:

	void fun()
	{
		cout<<y;
		cout<<z;
	}

};

class hello : public Demo
{
	public:

	int i=10;

private:

	int j=20;

protected:

	int k=30;

public:

	void gun()
	{
		cout<<z<<endl;
		//cout<<y;
	}
};

int main(int argc, char const *argv[])
{
	 hello obj2;
	// cout<<obj1.x;
	// //cout<<obj1.y;
	// //cout<<obj1.z;
	// cout<<obj1.i;
	// //cout<<obj1.j;
	// //cout<<obj1.k;

	 obj2.gun();
	 obj2.fun();
	//Demo obj1;
	// cout<<obj1.x;
	// cout<<obj1.y;
	// cout<<obj1.z;
	// cout<<obj1.i;
	// cout<<obj1.j;
	// cout<<obj1.k;
	//obj1.fun();
	return 0;
}
