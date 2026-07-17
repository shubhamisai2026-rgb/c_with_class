#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node *PNODE;
class SinglyList
{
private:
    PNODE first;
    int iCount;

public:
    SinglyList();
    int count();
    void display();
    void insertFirst(int no);
    void insertLast(int no);
    void insertAtPos(int no, int pos);
    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int pos);
};

SinglyList::SinglyList()
{
    this->first = NULL;
    this->iCount = 0;
}

void SinglyList::insertFirst(int no)
{
    PNODE newnode = NULL;
    newnode = new NODE;
    newnode->data = no;
    newnode->next = NULL;
    newnode->prev = NULL;
    if (this->first == NULL)
    {
        this->first = newnode;
    }
    else
    {
        newnode->next = this->first;
        this->first->prev = newnode;
        this->first = newnode;
    }
    this->iCount++;
}

void SinglyList::insertLast(int no)
{
    PNODE newnode = NULL;
    newnode = new NODE;
    newnode->next = NULL;
    newnode->data = no;
    if (this->first == NULL)
    {
        this->first = newnode;
    }
    else
    {
        PNODE temp = NULL;
        temp = this->first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        temp->next = newnode;
    }
    this->iCount++;
}

void SinglyList::insertAtPos(int no, int pos)
{
    PNODE newnode = NULL;
    if ((pos < 1) || (pos > iCount + 1))
    {
        cout << "invalid position..." << "\n";
        return;
    }
    else if (pos == 1)
    {
        this->insertFirst(no);
    }
    else if (pos == iCount + 1)
    {
        this->insertLast(no);
    }
    else
    {
        int i = 0;
        PNODE temp = NULL;
        newnode = new NODE;
        newnode->data = no;
        newnode->next = NULL;
        newnode->prev = NULL;
        temp = this->first;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;
    }
    this->iCount++;
}

void SinglyList::deleteFirst()
{
    if (this->first == NULL)
    {
        return;
    }
    else if (this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = this->first;
        this->first = this->first->next;
        this->first->prev = NULL;
        delete temp;
    }
    this->iCount--;
}

void SinglyList::deleteLast()
{
    if (this->first == NULL)
    {
        return;
    }
    else if (this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = this->first;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    this->iCount--;
}

void SinglyList::deleteAtPos(int pos)
{
    if ((pos < 1) || (pos > iCount))
    {
        cout<<"invalis position...";
        return;
    }
    else if (pos == 1)
    {
        this->deleteFirst();
    }
    else if (pos == iCount)
    {
        this->deleteLast();
    }
    else
    {
        int i = 0;
        PNODE temp = NULL;
        temp=this->first;
        PNODE extra = NULL;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        extra = temp->next;
        extra->next->prev = temp;
        temp->next = extra->next;
        delete (extra);
    }
    this->iCount--;
}
void SinglyList::display()
{
    PNODE temp = NULL;
    temp = this->first;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    SinglyList sobj;
    sobj.insertFirst(11);
    sobj.insertFirst(21);
    sobj.insertFirst(31);
    sobj.display();

    sobj.insertLast(41);
    sobj.insertLast(51);
    sobj.insertLast(61);
    sobj.display();

    sobj.insertAtPos(71, 2);
    sobj.insertAtPos(81, 2);
    sobj.insertAtPos(91, 2);
    sobj.display();

    

    sobj.deleteAtPos(3);
    sobj.display();


    return 0;
}