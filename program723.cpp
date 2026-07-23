#include<iostream>
using namespace std;

double display(double arr[],int size)
{
 int i=0;double sum=0.0;
 for(i=0;i<size;i++)
 {
   sum=sum+arr[i];
 }
 return sum;
}

void display2(double arr[],int size)
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
    cout<<"addition of all the array elements:"<<res;
    display2(arr,5);
    return 0;
}