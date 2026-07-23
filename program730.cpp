#include<iostream>
using namespace std;

class Array
{
    public:
    int size;
    int *arr;
    Array(int no);
    ~Array();
    void accept();
    void display();
    int summation();
};

Array::Array(int no)
{
    size=no;
    arr=new int[size];
}
Array::~Array()
{
    delete[]arr;
}
void Array::accept()
{
    int i=0;
    cout<<"enter the elements:\n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void Array::display()
{
    int i=0;
    cout<<"elements of the array is:\n";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<"\n";
    }
}

int Array:: summation()
{
    cout<<"sum of array elements is:\n";
    int i=0;int sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    Array aobj(5);
    aobj.accept();
    aobj.display();
    cout<<aobj.summation();
    return 0;
}