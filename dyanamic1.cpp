#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[10];
	int *p = NULL;
	p= new int[10];//memory allocated     
	if (p!=NULL)
	{
		cout<<"allocated::::"<<p<<"\n";
	}
	else
	{
		cout<<"not allocated";
	}

	delete p; //deallocate memory


	return 0;
}