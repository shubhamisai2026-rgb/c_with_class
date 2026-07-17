
#include <iostream>
using namespace std;
#pragma pack(1)
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
    int iCount = 0;

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
    newnode->next = NULL;
    newnode->data = no;
    if (this->first == NULL)
    {
        this->first = newnode;
    }
    else
    {
        newnode->next = this->first;
        this->first = newnode;
    }
    this->iCount++;
}

void SinglyList::insertLast(int no)
{
    PNODE newnode = NULL;
    newnode = new NODE;
    newnode->data = no;
    newnode->next = NULL;
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
        PNODE temp = NULL;
        temp = this->first;
        newnode->data = no;
        newnode->next = NULL;
        int i = 0;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
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
        PNODE temp = this->first;
        this->first = this->first->next;
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
        cout << "invalid position..." << "\n";
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
        temp = this->first;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        PNODE extra = NULL;
        extra = temp->next;
        temp->next = extra->next;
        delete extra;
    }
    this->iCount--;
}

int SinglyList::count()
{
    return this->iCount;
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
    cout<<"\n";
}

int main()
{
    SinglyList sobj;
    int choice = 1;
    int iValue = 0;
    int iRet = 0;
    int iPos = 0;

    while (choice)
    {
        cout << "enter a your choice:" << "\n";
        cout << "1.insert first" << "\n";
        cout << "2.insert last" << "\n";
        cout << "3.insertAtPos" << "\n";
        cout << "4.delete first" << "\n";
        cout << "5.delete Last" << "\n";
        cout << "6.delete At pos" << "\n";
        cout << "7.display list" << "\n";
        cout << "8.nodes count" << "\n";
        cin >> choice;
        switch (choice)
        {
        case 1:

            cout << "enter a you value:" << "\n";
            cin >> iValue;
            sobj.insertFirst(iValue);
            break;

        case 2:

            cout << "enter a your value:" << "\n";
            cin >> iValue;
            sobj.insertLast(iValue);
            break;

        case 3:

            cout << "enter a your value:" << "\n";
            cin >> iValue;
            cout << "enter a your position:" << "\n";
            cin >> iPos;
            sobj.insertAtPos(iValue, iPos);
            break;

        case 4:
            sobj.deleteFirst();
            break;

        case 5:
            sobj.deleteLast();
            break;

        case 6:

            cout << "enter a node position:" << "\n";
            cin >> iPos;
            sobj.deleteAtPos(iPos);
            break;

        case 7:
            sobj.display();
            break;

        case 8:

            iRet = sobj.count();
            cout << "total nodes are:\n"
                 << iRet;
            break;

        default:
            cout << "invalid choice...\n";
        }
    }
    return 0;
}