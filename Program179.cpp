#include<iostream>
using namespace std;
int main()
{
    int iNum=0;int iCnt=0;
    cout<<"enter a your number:\n";
    cin>>iNum;
    cout<<"total odd numbers:\n";
    for(iCnt=0;iCnt<=iNum;iCnt++)
    {
        if(iCnt%2!=0)
        {
        cout<<iCnt<<"\n";
        }
    }
    return 0;
}