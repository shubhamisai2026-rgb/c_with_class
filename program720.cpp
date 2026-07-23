#include<iostream>
using namespace std;
template<class X>

X maximum(X a,X b,X c)
{
    X ans;
    if(a>b && a>c )
    {
        ans=a;
    }
    else if(b>a && b>c)
    {
        ans=b;
    }
    else
    {
        ans=c;
    }
    return ans;
}

int main()
{
    cout<<maximum(23,53,54)<<"\n";
    cout<<maximum(32.4f,53.5f,64.6f)<<"\n";
    cout<<maximum(43.53,54.53,64.24);
    return 0;
}