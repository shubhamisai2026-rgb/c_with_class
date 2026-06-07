#include<iostream>
using namespace std;
int main()
{
 int iNum;
 cout<<"enter a your number:";
 cin>>iNum;
 int iCnt=0;
 for(iCnt=1;iCnt<=10;iCnt++)
{
    cout<<iCnt*iNum<<"\n";
}
return 0;
}