#include<iostream>
using namespace std;

class Array
{
    public:
    int *arr;
    int size;
    Array(int no)
    {
        size=no;
        arr=new int[size];
    }
    ~Array()
    {
        delete []arr;
    }
    void accept()
    {
        int i=0;
        cout<<"enter the elements:";
        for(i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }
    void display()
    {
        int i=0;
        cout<<"elements of the array is:";
        for(i=0;i<size;i++)
        {
            cout<<arr[i]<<"\n";
        }
    }
};
int main()
{
    Array aobj(5);
    aobj.accept();
    aobj.display();
    return 0;
}