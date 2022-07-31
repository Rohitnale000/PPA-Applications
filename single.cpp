#include <iostream> 
using namespace std;
class base
{
  public:
  	int x;
  	int y;

  	base()
  	{
  		cout<<"inside base constructor";
  	}

};

class derived : public base
{
  public:
  	int i;
  	int j;

  	derived()
  	{
  		cout<<"inside derived constructor";
  	}
  
};

int main()
{

	derived obj;
	return 0;
}