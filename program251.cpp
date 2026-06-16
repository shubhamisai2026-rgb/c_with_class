#include<iostream>
using namespace std;
#pragma pack(1)
class ArrayX
{
  private:
  int *arr;
  int iSize;
  public:
  ArrayX(int X=5)
  {
    iSize=X;
    arr=new int[iSize];
  }
  ~ArrayX()
  {
    delete[]arr;
  }
  void accept()
  {
    int iCnt=0;
    cout<<"enter the elements of the array is:";
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cin>>arr[iCnt];
    }
  }
  void display()
  {
    int iCnt=0;
    cout<<"elements of the array is:";
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<arr[iCnt];
    }
  }
  int addition()
  {
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+arr[iCnt];
    }
    return iSum;
  }
};
int main()
{
   ArrayX *aobj=NULL;
   int iLength;int iRet;
   cout<<"enter the size of the array is:";
   cin>>iLength;
   aobj=new ArrayX(iLength);
   aobj->accept();
   aobj->display();
   iRet=aobj->addition();
   cout<<"addition of the array elements is:"<<iRet;
   delete aobj;
   return 0;
}