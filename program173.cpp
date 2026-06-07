#include<iostream>
using namespace std;
int main()
{
    int iCnt=0;
    int iSum=0;
    int iNum=0;
    cout<<"enter a first number:";
    cin>>iNum;
    for(iCnt=0;iCnt<=iNum;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    cout<<"addition of N numbers is:"<<iSum;
}