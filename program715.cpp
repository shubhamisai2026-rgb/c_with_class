#include<iostream>
using namespace std;
float maximum(float a,float b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout<<maximum(31.4,21.4);
    return 0;
}