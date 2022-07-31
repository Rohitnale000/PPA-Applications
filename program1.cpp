#include<iostream>
using namespace std;
class demo
{
    public:

            
            int Div(int iNo1,int iNo2)
            {
                
                int iAns=0;
                iAns = iNo1/iNo2;
                return iAns;
            }

};
int main()
{
    int iValue1,iValue2=0;
    int iRet=0;
    cout<<"enter first number:";
    cin>>iValue1;
    cout<<"enter secound number:";
    cin>>iValue2;
    demo obj;
    iRet = obj.Div(iValue1,iValue2);
    cout<<"Division is:"<<iRet;
    return 0;
}