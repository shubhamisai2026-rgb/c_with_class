#include <iostream>
#pragma pack(1)
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyList
{
private:
    PNODE first;
    PNODE last;
    int iCount;

public:
    DoublyList();
    void insertFirst(int no);
    void insertLast(int no);
    void insertAtPos(int no, int pos);
    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int pos);
    void display();
    int count();
};

DoublyList::DoublyList()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

void DoublyList::insertFirst(int no)
{
    PNODE newnode = NULL;
    newnode = new NODE;
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = no;
    if (first == NULL && last == NULL)
    {
        first = newnode;
        last = newnode;
    }
    else
    {
        newnode->next = first;
        first = newnode;
    }
    last->next = first;
    first->prev = newnode;
    iCount++;
}

void DoublyList::insertLast(int no)
{
    PNODE newnode = NULL;
    newnode = new NODE;
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = no;
    if (first == NULL && last == NULL)
    {
        first = newnode;
        last = newnode;
    }
    else
    {
        last->next = newnode;
        last = newnode;
    }
    last->next = first;
    first->prev = last;
    iCount++;
}

void DoublyList::insertAtPos(int no, int pos)
{
    if ((pos < 1) && (pos > iCount + 1))
    {
        cout << "invalid position\n";
        return;
    }
    if (pos == 1)
    {
        insertFirst(no);
    }
    else if (pos == iCount + 1)
    {
        insertLast(no);
    }
    else
    {
        int i = 0;
        PNODE temp = NULL;
        temp = first;
        PNODE newnode = NULL;
        newnode = new NODE;
        newnode->next = NULL;
        newnode->prev = NULL;
        newnode->data = no;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;
    }
    iCount++;
}

void DoublyList::deleteFirst()
{
    if (first == NULL && last == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = first;
        first = first->next;
        delete temp;
        first->prev = last;
        last->next = first;
    }
    iCount--;
}

void DoublyList::deleteLast()
{
    if (first == NULL && last == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = first;
       while(temp->next!=last)
       {
         temp=temp->next;
       }
        delete last;
        last = temp;
    }
     last->next = first;
        first->prev = last;
    iCount--;
}

void DoublyList::deleteAtPos(int pos)
{
    if ((pos < 1) && (pos > iCount))
    {
        cout << "invalid position...";
        return;
    }
    if (pos == 1)
    {
        deleteFirst();
    }
    else if (pos == iCount)
    {
        deleteLast();
    }
    else
    {
        int i = 0;
        PNODE temp = NULL;
        PNODE extra = NULL;
        temp=first;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        extra = temp->next;
        temp->next = extra->next;
        extra->next->prev = temp;
        delete extra;
    }
    iCount--;
}

int DoublyList::count()
{
    return iCount;
}

void DoublyList::display()
{
    do
    {
        cout << first->data << "<->";
        first = first->next;
    } while (first != last->next);
}

int main()
{
    DoublyList dobj;
    dobj.insertFirst(11);
    dobj.insertFirst(21);
    dobj.insertFirst(31);
    int iRet = 0;
    iRet = dobj.count();
    cout << "total nodes are:" << iRet;
    cout << "\n";
    dobj.display();
    cout << "\n";

    dobj.insertLast(41);
    dobj.insertLast(51);
    dobj.insertLast(61);
    iRet = dobj.count();
    cout << "total nodes are:" << iRet;
    cout << "\n";
    dobj.display();
    cout << "\n";

    dobj.insertAtPos(71, 2);
    dobj.insertAtPos(81, 2);
    dobj.insertAtPos(91, 2);
    iRet = dobj.count();
    cout << "total nodes are:" << iRet;
    cout << "\n";
    dobj.display();
    cout << "\n";

    dobj.deleteFirst();
    dobj.deleteFirst();
    dobj.deleteFirst();
    iRet = dobj.count();
    cout << "total nodes are:" << iRet;
    cout << "\n";
    dobj.display();
    cout << "\n";

    dobj.deleteLast();
    dobj.deleteLast();
    dobj.deleteLast();
    iRet = dobj.count();
    cout << "total nodes are:" << iRet;
    cout << "\n";
    dobj.display();
    cout << "\n";

    dobj.deleteAtPos(2);
    iRet = dobj.count();
    cout << "total nodes are:" << iRet;
    cout << "\n";
    dobj.display();

    return 0;
}