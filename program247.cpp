#include<iostream>
using namespace std;
class ArrayX
{
  private:
  int *arr;
  int iSize;
  public:
  ArrayX(int X)
  {
    iSize=X;
    arr=new int[iSize];
  }
  ~ArrayX()
  {
    delete[]arr;
  }
};
int main()
{
 ArrayX *aobj=new ArrayX(5);
// cout<<aobj->iSize; error
 //aobj->arr=NULL;    error
// aobj->iSize=0;     error
 delete aobj;         
 return 0;
}