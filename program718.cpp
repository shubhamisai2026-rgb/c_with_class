#include<iostream>
using namespace std;
template<class T>

T maximum(T a,T b)
{
    T ans;
    if(a>b)
    {
        ans=a;
    }
    else
    {
        ans=b;
    }
    return ans;
}

int main()
{
    cout<<maximum(23,53)<<"\n";
    cout<<maximum(32.4f,53.5f)<<"\n";
    cout<<maximum(43.53,54.53);
    return 0;
}