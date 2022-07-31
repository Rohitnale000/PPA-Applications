#include<iostream>
using namespace std;
class base
{
	public:
			virtual void fun()
			{
				cout<<"inside base fun"<<endl;
			}

			virtual void gun()
			{
				cout<<"inside base gun"<<endl;
			}

			void sun()
			{
				cout<<"inside base sun"<<endl;
			}

};

class derived:public base
{
	public:
			void fun()
			{
				cout<<"inside derived fun"<<endl;
			}

			void gun()
			{
				cout<<"inside derived gun"<<endl;
			}

			 void sun()
			{
				cout<<"inside derived sun"<<endl;
			}


};

int main(int argc, char const *argv[])
{
	base *obj=new derived();
	

	obj->fun();
	obj->gun();
	obj->sun();

	return 0;
}