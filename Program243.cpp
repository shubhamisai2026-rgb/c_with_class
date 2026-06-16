#include<iostream>
using namespace std;
class ArrayX
{
    public:
    int *arr;
    int iSize=0;
    ArrayX(int X)
    {
        cout<<"inside the constructor";
        iSize=X;
        arr=new int[iSize];
    }
    ~ArrayX()
    {
        cout<<"inside destructor..."<<endl;
        delete[]arr;
    }
};
int main()
{
    ArrayX *aobj=new ArrayX(5);
    delete aobj;
    cout<<"end of the main";
    return 0;
}