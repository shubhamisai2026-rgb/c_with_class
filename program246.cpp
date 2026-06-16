#include<iostream>
using namespace std;
#pragma pack(1)
class ArrayX
{
    public:
   
    int iSize;
    int *arr;
    ArrayX(int X)
    {
       iSize=X;
       arr=new int[iSize];
    }
    ~ArrayX()
    {
        delete[]arr;
    }
};
int main()
{
   ArrayX *aobj=new ArrayX(5);
   cout<<aobj->iSize;
   aobj->iSize=0;//issue
   aobj->arr=NULL;//issue ,allocated array is never freed
   cout<<aobj->iSize;
   delete aobj;
   return 0;
}