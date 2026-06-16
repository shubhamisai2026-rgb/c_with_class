#include <iostream>
using namespace std;
class ArrayX
{
public:
    // summation method is the private if i i am not given any access spcifier
    //by default method become the private
    int summation(int arr[], int iSize)
    {
        int iCnt = 0;
        int iSum = 0;
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + arr[iCnt];
        }
        return iSum;
    }
};
int main()
{
    ArrayX aobj;
    int iRet = 0;
    int iLength = 0;
    cout << "enter the length of the array is:";
    cin >> iLength;
    int *brr = NULL;
    brr = new int[iLength];
    int iCnt = 0;
    cout << "enter the array elements:";
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin >> brr[iCnt];
    }
    cout << "elements of the array is:";
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout << brr[iCnt] << endl;
    }
    iRet = aobj.summation(brr, iLength);
    cout << "addition of the array elements is:" << iRet;
    delete[] brr;
}