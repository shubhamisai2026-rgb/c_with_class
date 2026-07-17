#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyList
{
  private:
     PNODE first;
     int iCount=0;
  public:
     SinglyList()
     {
      this->first=NULL;
      this->iCount=0;
     }
};
int main()
{
  SinglyList sobj;
  // sobj.first=NULL; error
  //sobj.count=15;    error
  return 0;
}