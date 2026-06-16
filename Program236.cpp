#include <iostream>
using namespace std;
class ArrayX
{
public:
    int multiplication(int arr[], int iSize)
    {
        int iCnt = 0;
        int iSum = 1;
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum * arr[iCnt];
        }
        return iSum;
    }
};
int main()
{
    ArrayX aobj;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;
    cout << "enter the size of the array is:";
    cin >> iLength;
    int *brr = NULL;
    brr = new int[iLength];
    cout << "enter the elements of the array is:";
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin >> brr[iCnt];
    }
    cout << "element of the array is:";
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout << brr[iCnt];
    }
    iRet = aobj.multiplication(brr, iLength);
    cout << "multiplication of the array elements is:" << iRet;
    delete[] brr;
}
