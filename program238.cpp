#include<iostream>
using namespace std;
#pragma pack(1) //1 byte
class ArrayX
{
    public:
    int *arr;
    int isize;
};
int main()
{
    ArrayX aobj;
    cout<<sizeof(aobj)<<endl; 
    return 0;
}