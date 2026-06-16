#include<iostream>
using namespace std;
class ArrayX
{
    private:
    int *arr;
    int iSize;
    public:
    //parameterize constructor with default arguments
    ArrayX(int X=5)
    {
        iSize=X;
        arr=new int[iSize];
    }
    ~ArrayX()
    {
        delete[]arr;
    }
    void accept()
    {
        int iCnt=0;
        cout<<"entet the your array elements:";
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>arr[iCnt];
        }
    }
    void display()
    {
        int iCnt=0;
        cout<<"elements of the array is:";
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cout<<arr[iCnt];
        }
    }
};
int main()
{
    ArrayX *aobj=NULL;
    int iLength;
    cout<<"enter the size of the array is:";
    cin>>iLength;
    aobj=new ArrayX[iLength];
    aobj->accept();
    aobj->display();
    delete aobj;
    return 0;
}