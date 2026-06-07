#include<iostream>
using namespace std;
int main()
{
    int iNum1=0,iNum2=0,iNum3=0;
    cout<<"enter a first number:";
    cin>>iNum1;
    cout<<"enter a second number:";
    cin>>iNum2;
    cout<<"enter a third number:";
    cin>>iNum3;
    if(iNum1>iNum2 && iNum1>iNum3)
    {
        cout<<"number one is largest.....";
    }
    else if(iNum2>iNum1 && iNum2>iNum3)
    {
        cout<<"second number is a largest........";
    }
    else
    {
        cout<<"third number is largest..........";
    }
    return 0;
}