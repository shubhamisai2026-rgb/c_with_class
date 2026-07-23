#include <iostream>
using namespace std;
double addition(double iValue1, double iValue2)
{
    double iRet = 0.0;
    iRet = iValue1 + iValue2;
    return iRet;
}
int main()
{
    double no1 = 10.5f;
    double no2 = 11.7f;
    double iResult = addition(no1, no2);
    cout << "addition of the two numbers is:" << iResult;
    return 0;
}