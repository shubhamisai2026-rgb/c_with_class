#include <iostream>
using namespace std;
int main()
{
    int iCnt = 0;
    int iNum = 0;
    int iDigit = 0;
    int iCount = 0;
    cout << "enter a your number:";
    cin >> iNum;
    while (iNum != 0)
    {
        iDigit = iNum % 10;
        iCount++;
        iNum = iNum / 10;
    }
    cout << "total number of digit is:" << iCount;
}