#include<iostream>
using namespace std;
int main()
{
	int input=0;
	enum tas {ppa=1,lb=2,angular=3,lsb=4};
	

	cout<<"enter the tas"<<"\n";
	cin>>input;

	switch(input)
	{
		case ppa:
		cout<<"fee is 15000\n";
		break;

		case lb:
		cout<<"fee is 17000\n";
		break;

		case angular:
		cout<<"fee is 18000\n";
		break;

		case lsb:
		cout<<"fee is 19000\n";
		break;

		default:
		cout<<"yeda aahe ky tu\n";
		break;

	}


	return 0;
}