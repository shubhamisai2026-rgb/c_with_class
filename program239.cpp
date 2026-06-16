#include<iostream>
using namespace std;
#pragma pack(1)
class ArrayX
{
    public:
    int *arr;
    int iSize;
    ArrayX(int X)
    {
        cout<<"value of x:"<<X<<endl;
    }
};
int main()
{
    ArrayX aobj(5);
   cout<<sizeof(aobj)<<endl;
    return 0;
}