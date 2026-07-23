#include<iostream>
using namespace std;
int maximum(int a,int b)
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
    cout<<maximum(31,21);
    return 0;
}