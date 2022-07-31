#include<iostream>
using namespace std;
int main()
{
	int iNo;
	
	cout<<"enter elements:";
	cin>>iNo;
	int arr[iNo];
	for (int i = 0; i < iNo; ++i)
	{
		cin>>arr[i];
	}

	cout<<"this is array elements:"<<"\n";

	for (int i = 0; i < iNo; ++i)
	{
		/* code */
		cout<<arr[i]<<"\n";
	}

	
	return 0;
}