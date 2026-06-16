#include<iostream>
using namespace std;
class ArrayX
{
    public:
    int *arr=NULL;
    int iSize=0;
    ArrayX(int x)
    {
        iSize=x;
        arr=new int[iSize];
    }
    ~ArrayX()
    {
        cout<<"inside destructor"<<"\n";
        delete[]arr;
    }
};
int main()
{
    ArrayX *aobj1=new ArrayX(5);
    aobj1->arr[0]=45;
    cout<<aobj1->arr[0];
        return 0;
}