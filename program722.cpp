#include<iostream>
using namespace std;

void display(double arr[],int size)
{
 int i=0;
 for(i=0;i<size;i++)
 {
   cout<<arr[i]<<"\n";
 }
}
int main()
{
    double arr[]={10.32,20.32,30.44,40.53,50.53};
    display(arr,5);
    return 0;
}