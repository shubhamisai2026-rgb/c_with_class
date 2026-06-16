#include <iostream>
using namespace std;
class ArrayX
{
private:
    int *arr;
    int iSize;

public:
    ArrayX(int X = 5)
    {
        // parameterize constructor with default arguments
        iSize = X;
        arr = new int[iSize];
    }
    ~ArrayX()
    {
        delete[] arr;
    }
};
int main()
{
    // parameterize constructor
    ArrayX *aobj1 = new ArrayX(5);
    // parameterize constructor
    ArrayX *aobj2 = new ArrayX(6);
    delete aobj1;
    delete aobj2;
    return 0;
}