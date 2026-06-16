#include <iostream>
using namespace std;
class ArrayX
{
public:
    int *Array;
    int iSize;
    // parameterized constructor
    ArrayX(int X)
    {
        // characteristic initialization
        iSize = X;
        // resource allowcation
        Array = new int[iSize];
    }
    ~ArrayX()
    {
        // destructor
        cout << "inside destructor" << endl;
        // resource deallowcation
        delete[] Array;
    }
};
int main()
{
    ArrayX aobj(5);
    return 0;
}