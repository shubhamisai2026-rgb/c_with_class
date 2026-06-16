#include<iostream>
using namespace std;
int main()
{
    int *brr=NULL;
    int iLength=0;
    int iCnt=0;
    cout<<"enter the size of the array is:";
    cin>>iLength;
    //memory allocation
    brr=new int[iLength];
    cout<<"enter the elements of the array is:";
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        cin>>brr[iCnt];
    
    }
    cout<<"elements of the array is:";
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        cout<<brr[iCnt]<<"\n";
    }
    delete[]brr;
}