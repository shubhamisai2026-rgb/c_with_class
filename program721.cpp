#include<iostream>
using namespace std;

void display(int arr[],int size)
{
 int i=0;
 for(i=0;i<size;i++)
 {
    cout<<arr[i]<<"\n";
 }
}
int main()
{
    int arr[]={10,20,30,40,50};
    display(arr,5);
    return 0;
}