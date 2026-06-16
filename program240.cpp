#include<iostream>
using namespace std;
class ArrayX
{
    public:
    int *arr;
    int iSize;
    ArrayX()
    {
      cout<<"this is the default constructor:"<<endl;
    }
    ArrayX(int x)
    {
       cout<<"this is the parameterize constructor:"<<x<<endl;
    }
};
int main()
{
    ArrayX aobj1;
    ArrayX aobj2(5);
    cout<<sizeof(aobj1);
    return 0;
}