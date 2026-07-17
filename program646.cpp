#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;

class SinglyList
{
  private:
  PNODE first;
  int iCount;
  public:
  SinglyList();
  void display();
  int count();
  void insertFirst(int no);
  void insertLast(int no);
};

SinglyList::SinglyList()
{
    this->first=NULL;
    this->iCount=0;
}

void SinglyList::insertFirst(int no)
{
  PNODE newnode=NULL;
  newnode=new NODE;
  newnode->data=no;
  newnode->next=NULL;
  if(iCount==0)
  {
    this->first=newnode;
  }
  else
  {
    newnode->next=this->first;
    this->first=newnode;
  }
  iCount++;
}

void  SinglyList::insertLast(int no)
{
    PNODE newnode=NULL;
    newnode=new NODE;
    newnode->next=NULL;
    newnode->data=no;
    if(this->iCount==0)
    {
        this->first=newnode;
    }
    else
    {
        PNODE temp=NULL;
        temp=this->first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    iCount++;
}

int SinglyList::count()
{
    return this->iCount;
}

void SinglyList::display()
{
    int i=0;PNODE temp=NULL;
    for(i=1,temp=this->first;i<=iCount;i++,temp=temp->next)
    {
        cout<<temp->data<<"->";
    }
    cout<<"NULL"<<endl;
}

int main()
{
 SinglyList sobj;
 sobj.insertFirst(11);
 sobj.insertFirst(21);
 sobj.insertFirst(31);
 sobj.display();
 int iRet=0;
 iRet=sobj.count();
 cout<<"total nodes are:"<<iRet<<"\n";

sobj.insertLast(41);
sobj.insertLast(51);
sobj.insertLast(71);
sobj.display();
iRet=sobj.count();
cout<<"total nodes are:"<<iRet;

return 0;
}