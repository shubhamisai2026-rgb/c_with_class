#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node * next;
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
    void insertAtPos(int no,int pos);
    void deleteFirst();
    void deleteLast();
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
 newnode->next=NULL;
 newnode->data=no;
 if(this->first==NULL)
 {
   this->first=newnode;
 }
 else
 {
    newnode->next=this->first;
    this->first=newnode;
 }
 this->iCount++;
}

void SinglyList::insertLast(int no)
{
    PNODE newnode=NULL;
    newnode=new NODE;
    newnode->next=NULL;
    newnode->data=no;
    if(this->first==NULL)
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
    this->iCount++;
}

void SinglyList::insertAtPos(int no,int pos)
{
    PNODE newnode=NULL;
    newnode=new NODE;
    newnode->data=no;
    newnode->next=NULL;
     if((pos<1) || (pos>iCount+1))
     {
        cout<<"invalid position....."<<"\n";
        return;
     }
    else if(pos==1)
    {
     this->insertFirst(no);
    }
    else if(pos==iCount+1)
    {
        this->insertLast(no);
    }
    else
    {
        PNODE temp=NULL;
        temp=this->first;
        int i=0;
        for(i=1;i<pos-1;i++)
        {
          temp=temp->next;
        }
       newnode->next=temp->next;
       temp->next=newnode;
    }
    this->iCount++;
}


void SinglyList::deleteFirst()
{
    if(this->first==NULL)
    {
        return;
    }
    else if(this->first->next==NULL)
    {
        delete this->first;
        this->first=NULL;
    }
    else
    {
        PNODE temp=NULL;
        temp=this->first;
        this->first=this->first->next;
        delete temp;
    }
    this->iCount--;
}

void SinglyList::deleteLast()
{
    if(this->first==NULL)
    {
        return;
    }
    else if(this->first->next==NULL)
    {
        delete this->first;
        this->first=NULL;
    }
    else
    {
        PNODE temp=NULL;
        temp=this->first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    this->iCount--;
}

int SinglyList::count()
{
    return this->iCount;
}

void SinglyList::display()
{
  PNODE temp=NULL;
  temp=this->first;
  while(temp!=NULL)
  {
    cout<<temp->data<<"->";
    temp=temp->next;
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
    int iRet=sobj.count();
    cout<<"total nodes are:"<<iRet<<"\n";

    sobj.insertLast(31);
    sobj.insertLast(41);
    sobj.insertLast(51);
    sobj.display();
    iRet=sobj.count();
    cout<<"total nodes are:"<<iRet<<"\n";

    sobj.deleteFirst();
    sobj.display();
    iRet=sobj.count();
    cout<<"total nodes are:"<<iRet<<"\n";

    sobj.deleteLast();
    sobj.display();
    iRet=sobj.count();
    cout<<"total nodes are:"<<iRet<<"\n";

    sobj.insertAtPos(71,3);
    sobj.insertAtPos(81,2);
    sobj.insertAtPos(91,4);
    sobj.display();
    iRet=sobj.count();
    cout<<"total nodes are:"<<iRet;
    return 0;
}
