#include <iostream>
using namespace std;
int addition(float iValue1, float iValue2)
{
    float iRet = 0.0f;
    iRet = iValue1 + iValue2;
    return iRet;
}
int main()
{
    float no1 = 10.5f;
    float no2 = 11.7f;
    float iResult = addition(no1, no2);
    cout << "addition of the two numbers is:" << iResult;
    return 0;
}