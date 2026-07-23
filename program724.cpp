#include<iostream>
using namespace std;
template<class T>

T display(T arr[],int size)
{
 int i=0;T sum=0.0;
 for(i=0;i<size;i++)
 {
   sum=sum+arr[i];
 }
 return sum;
}

template<class T>

void display2(T arr[],int size)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<"\n";
    }
}

int main()
{
    double arr[]={10.3,20.32,30.44,40.53,50.53};
    double res=display(arr,5);
    cout<<"addition of all the array elements:"<<res<<"\n";
    display2(arr,5);

    int crr[]={12,43,53,12,56};
    int resu=display(crr,5);
     cout<<"addition of all the array elements:"<<resu<<"\n";
    display2(crr,5);


    return 0;
}