#include<iostream>
using namespace std;
int main()
{
    int iNum=0;
    cout<<"enter a your number:";
    cin>>iNum;
    if(iNum==0)
    {
        cout<<"the number is zero.......";
    }
    else if(iNum>0)
    {
        cout<<"the number is a positive........";
    }
    else
    {
        cout<<"the number is negative..........";
    }
    return 0;
}