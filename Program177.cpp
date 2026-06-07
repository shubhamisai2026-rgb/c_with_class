#include<iostream>
using namespace std;
int main()
{
    int iNum=0;int iCnt=0;
    cout<<"enter a your number:";
    cin>>iNum;
    for(iCnt=iNum;iCnt>=1;iCnt--)
    {
        cout<<iCnt<<"\n";
    }
    return 0;
}