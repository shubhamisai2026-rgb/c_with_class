#include<iostream>
using namespace std;
float maximum(float a,float b)
{
   float ans=0.0f;
   (a>b) ?(ans=a):(ans=b);
   return ans;
}

int main()
{
    cout<<maximum(31.4,21.4);
    return 0;
}