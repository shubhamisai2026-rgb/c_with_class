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
    void insertFirst(int no);
    void insertLast(int no);
    int count();
    void display();
};

SinglyList::SinglyList()
{
    this->first=NULL;
    this->iCount=0;
}

void SinglyList::insertFirst(int no)
{
    PNODE newnode;
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
    newnode->data=no;
    newnode->next=NULL;
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

int SinglyList :: count()
{
    return this->iCount;
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

    sobj.insertLast(41);
    sobj.insertLast(51);
    sobj.insertLast(61);

    sobj.display();
    iRet=sobj.count();
    cout<<"total nodes are:"<<iRet;

    return 0;
}