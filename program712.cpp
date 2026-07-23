#include<iostream>
#pragma pack(1)
using namespace std;

int addition(int a,int b)
{
    int ans=0;
    ans=a+b;
    return ans;
}

float subtraction(float a,float b)
{
    float ans=0.0f;
    ans=a-b;
    return ans;
}

double multiplication(double a,double b)
{
    double ans=0;
    ans=a*b;
    return ans;
}

int main()
{
    int a=5;int b=4;
    int iRet=0;
    iRet=addition(a,b);
    cout<<"addition of the two numbers is:"<<iRet;
    cout<<"\n";

    float c=7.4f;float d=8.2f;
    float iRes=0.0f;
    iRes=subtraction(c,d);
    cout<<"subtraction of the two numbers is:"<<iRes;
    cout<<"\n";

    double e=4.2;double f=1.3;
    double result=0.0;
    result=multiplication(e,f);
    cout<<"multiplication of the two numbers is:"<<result;
}