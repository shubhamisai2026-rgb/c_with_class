#include<iostream>
using namespace std;    
class ArrayX
{
    private:
    int *arr;
    int iSize;
    public:
    ArrayX()
    {
        iSize=5;
        arr=new int[iSize];
    }
    ArrayX(int X)
    {
        iSize=X;
        arr=new int(iSize);
    }
    ~ArrayX()
    {
        delete[]arr;
    }
};
int main()
{
    //default counstructor
    ArrayX *aobj1=new ArrayX();
    //parameterize constructor
    ArrayX *aobj2=new ArrayX(5);
       return 0;
}
