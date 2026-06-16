#include<iostream>
using namespace std;
#pragma pack(1)
class ArrayX
{
    public:
    int *arr;
    int iSize;
    ArrayX(int x)
    {
       iSize=x;
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
    delete aobj;
    return 0;
}