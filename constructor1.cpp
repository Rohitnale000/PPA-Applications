#include<iostream>
using namespace std;

class Demo
{
public:
  int iNo1=0; //charactristics
  int iNo2=0;

  Demo() //defult constructor
  {
    cout<<"inside defult constructor \n";
  }


  Demo(int i,int j) //parameterized constructor
  {
   iNo1=i;
   iNo2=j;
    cout<<"inside parameterized constructor \n";
  }

  ~Demo() //destructor
  {
    cout<<"inside destructor\n";
  }


  int addition() //beheviour
  {
    int iAns=0;
    iAns=iNo1+iNo2;
    return iAns;
  }


  int substraction() //beheviour
  {
    int iAns=0;
    iAns=iNo1-iNo2;
    return iAns;
  }

};

int main()
{

  int iValue1=0;
  int iValue2=0;
  register int iRet=0;


  cout<<"enter first number:\n";
  cin>>iValue1;

  cout<<"enter second number:\n";
  cin>>iValue2;

  Demo obj1;   //defult constructor

  Demo obj2(iValue1,iValue2); //parameterized Constructor

  iRet= obj2.addition();
  cout<<"addition is :"<<iRet<<"\n";
  
  iRet= obj2.substraction();
  cout<<"substraction is :"<<iRet<<"\n";
  return 0;
}