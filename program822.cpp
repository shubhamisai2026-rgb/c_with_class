#include<iostream>
using namespace std;
class Searching
{
    private:
    int iSize;
    int *arr;
    public:
          Searching(int no);
          ~Searching();
          void accept();
          void display();
          bool linearsearch(int no);
          bool bidirectionsearch(int no);
};
Searching::Searching(int no)
{
    iSize=no;
    arr=new int[iSize];
}
Searching::~Searching()
{
    delete[]arr;
}
void Searching::accept()
{
    int i=0;
    cout<<"enter the elements\n";
    for(i=0;i<iSize;i++)
    {
      cin>>arr[i];
    }
}
void Searching::display()
{
    int i=0;
    cout<<"elements of the array is:\n";
    for(i=0;i<iSize;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
bool Searching::linearsearch(int no)
{
 int i=0;
 for(i=0;i<iSize;i++)
 {
    if(arr[i]==no)
    {
        return true;
    }
 }
 return false;
}
bool Searching::bidirectionsearch(int no)
{
    int begsize=0;int endsize=iSize-1;
    bool bflag=false;
    while(begsize<=endsize)
    {
        if(arr[begsize]==no || arr[endsize]==no)
        {
            bflag=true;
            break;
        }
        begsize++;
        endsize--;
    }
    return bflag;
}
int main()
{
    Searching sobj(5);
    sobj.accept();
    sobj.display();
    if(sobj.linearsearch(12)==true)
    {
        printf("number is find\n");
    }
    else
    {
        printf("number is not find\n");
    }
    if(sobj.bidirectionsearch(30)==true)
    {
        printf("element is the find");
    }
    else
    {
        
        printf("elements is not find");
    }
    return 0;
}