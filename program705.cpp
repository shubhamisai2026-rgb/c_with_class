#include<iostream>
using namespace std;
#pragma pack(1)

struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Stack
{
    private:
    int iCount;
    PNODE first;
    public:
    Stack();
    void push(int no);
    void pop();   
    int peep();
    void display();
    int count();
};

Stack::Stack()
{
    this->iCount=0;
    this->first=NULL;
}

void Stack::push(int no)
{
   PNODE newnode=new NODE;
   newnode->next=NULL;
   newnode->data=no;

   newnode->next=first;
   first=newnode;

   iCount++;
}
void Stack::pop()
{

}
int Stack::peep()
{

}
void Stack::display()
{
   PNODE temp=NULL;
   temp=first;
   while(temp!=NULL)
   {
    cout<<temp->data<<"->";
    temp=temp->next;
   }
}
int Stack::count()
{
  return iCount++;
}
int main()
{
    Stack sobj;int iRet=0;
    sobj.push(11);
    sobj.push(21);
    sobj.push(31);
    iRet=sobj.count();
    cout<<"total elements in the stack is:"<<iRet<<"\n";
    sobj.display();
    return 0;
}