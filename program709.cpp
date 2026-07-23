#include<iostream>
using namespace std;
int addition(int iValue1,int iValue2)
{
    int iRet=0;
    iRet=iValue1+iValue2;
    return iRet;
}
int main()
{
    int no1=10;int no2=11;
    int iResult=addition(no1,no2);
    cout<<"addition of the two numbers is:"<<iResult;
    return 0;
}