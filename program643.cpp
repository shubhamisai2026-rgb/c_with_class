#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
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
    void display();
    int count();
    void insertFirst(int no);
    void insertLast(int no);
    void insertAtPos(int no, int pos);
    void deleteFirst();
    void deleteLast();
    void deleteAtPos();
};

SinglyList::SinglyList()
{
    this->first = NULL;
    this->iCount = 0;
}

void SinglyList::insertFirst(int no)
{
    PNODE newnode;
    newnode = new NODE;
    newnode->data = no;
    newnode->next = NULL;
    if (first == NULL)
    {
        first = newnode;
    }
    else
    {
        newnode->next = first;
        first = newnode;
    }
    iCount++;
}

void SinglyList::display()
{
    PNODE temp = NULL;
    temp = first;
    while (temp != NULL)
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int SinglyList::count()
{
    return iCount;
}

int main()
{
    SinglyList sobj;
    sobj.insertFirst(11);
    sobj.insertFirst(21);
    sobj.insertFirst(31);
    sobj.insertFirst(41);
    sobj.insertFirst(51);

    sobj.display();

    int iRet = sobj.count();
    cout << "total node of the list is:" << iRet;

    return 0;
}