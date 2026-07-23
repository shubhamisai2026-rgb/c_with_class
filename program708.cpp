#include <iostream>
#pragma pack(1)
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class Queue
{
private:
    int iCount;
    PNODE first;

public:
    Queue();
    void Enqueue(int no);
    int Dequeue();
    void display();
    int count();
};
Queue::Queue()
{
 this->iCount=0;
 this->first=NULL;
}

void Queue::Enqueue(int no)
{
    PNODE newnode=new NODE();
    newnode->next=NULL;
    newnode->data=no;
    if(first==NULL)
    {
        first=newnode;
    }
    else
    {
      PNODE temp=NULL;
      temp=first;
      while(temp->next!=NULL)
      {
        temp=first->next;
      }
      temp->next=newnode;
    }
    iCount++;
}
    int Queue::Dequeue()
    {
        if(first==NULL)
        {
            cout<<"queue is empt..\n";
            return -1;
        }
        else
        {
       PNODE temp=NULL;
       temp=first;

       int iValue=0;
       iValue=first->data;

       first=first->next;
       delete temp;
 iCount--;
       return iValue;
        }
    }

    void Queue:: display()
    {
        PNODE temp=NULL;
        temp=first;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"null"<<"\n";
    }

    int Queue:: count()
    {
        return iCount;
    }

int main()
{
    Queue qobj;
    qobj.Enqueue(11);
    qobj.Enqueue(21);
    qobj.Enqueue(31);
    qobj.display();
    int iRemove=0;
    iRemove=qobj.Dequeue();
    cout<<"remove node:"<<iRemove;
    cout<<"\n";
    qobj.display();
    int iRet=0;
    iRet=qobj.count();
    cout<<"total nodes are:"<<iRet;
}