#include<iostream>
using namespace std;
#pragma pack(1)
class ArrayX
{
    public:
    int *arr;
    int iSize;
    ArrayX(int X)
    {
        iSize=X;
        arr=new int(iSize);
    }
    ~ArrayX()
    {
        cout<<"inside destructor";
        delete[]arr;
    }
};
int main()
{
    ArrayX *aobj=new ArrayX(5);
    //logic(function call)
    delete aobj;
    return 0;
}