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
int main()
{
    Searching sobj(5);
    sobj.accept();
    sobj.display();
    if(sobj.linearsearch(12)==true)
    {
        printf("number is find");
    }
    else
    {
        printf("number is not find");
    }
    return 0;
}