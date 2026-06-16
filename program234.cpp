#include<iostream>
using namespace std;
int ArrayElementsSum(int brr[],int iSize)
{
 int iCnt=0;int iSum=0;
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
    iSum=iSum+brr[iCnt];
 }
 return iSum;
}
int main()
{
    int iLength=0;int iCnt=0;int iRet=0;
    cout<<"enter the length of the array:";
    cin>>iLength;
    int *arr=NULL;
    arr=new int[iLength];
    cout<<"enter the elements of the array is:";
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
      cin>>arr[iCnt];
    }
    iRet=ArrayElementsSum(arr,iLength);
    cout<<"addition of the array elements is:"<<iRet;

}
