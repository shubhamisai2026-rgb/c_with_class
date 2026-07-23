#include<iostream>
using namespace std;
 template<class T>

class Array
{
    public:
    T *arr;
    int size;
    Array(int no)
    {
        size=no;
        arr=new T[size];
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
    T summation()
    {
        int i=0;T sum=0;
        for(i=0;i<size;i++)
        {
            sum=sum+arr[i];
        }
        return sum;
    }
};
int main()
{
    Array<float>aobj(5);
    aobj.accept();
    aobj.display();
    cout<<aobj.summation();
    return 0;
}