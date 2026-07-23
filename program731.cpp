#include<iostream>
using namespace std;
template<class T>
class Array
{
    public:
    int size;
    int *arr;
    Array(int no);
    ~Array();
    void accept();
    void display();
    T summation();
};

template<class T>
Array<T>::Array(int no)
{
    size=no;
    arr=new int[size];
}
template<class T>
Array<T>::~Array()
{
    delete[]arr;
}
template<class T>
void Array<T>::accept()
{
    int i=0;
    cout<<"enter the elements:\n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
template<class T>
void Array<T>::display()
{
    int i=0;
    cout<<"elements of the array is:\n";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
template<class T>
T Array<T>:: summation()
{
    cout<<"sum of array elements is:\n";
    int i=0;int sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

template<class T>

int main()
{
    Array <T> aobj(5);
    aobj.accept();
    aobj.display();
    cout<<aobj.summation();
    return 0;
}