#include<iostream>
using namespace std;
class Array
{
    public:
    int *arr;
    int size;
    Array(int no)
    {
        this->size=no;
        arr=new int[size];
    }
    ~Array()
    {
        delete[]arr;
    }
};
int main()
{
    Array aobj(5);
    return 0;
}