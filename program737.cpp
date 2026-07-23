#include <iostream>
#pragma pack(1)
using namespace std;

template<class T>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

template<class T>
class DoublyList
{
private:
    struct node<T> * first;
    struct node<T> * last;
    int iCount;

public:
    DoublyList();
    void insertFirst(T no);
    void insertLast(T no);
    void insertAtPos(T no, int pos);
    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int pos);
    void display();
    int count();
};

template<class T>
DoublyList<T>::DoublyList()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

template<class T>
void DoublyList<T>::insertFirst(T no)
{
    struct node<T> * newnode = NULL;
    newnode = new struct node<T>;
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

template<class T>
void DoublyList<T>::insertLast(T no)
{
    struct node<T> * newnode = NULL;
    newnode = new struct node<T>;
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

template<class T>
void DoublyList<T>::insertAtPos(T no, int pos)
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
        struct node<T> * temp = NULL;
        temp = first;
        struct node<T> * newnode = NULL;
        newnode = new struct node<T>;
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

template<class T>
void DoublyList<T>::deleteFirst()
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
        struct node<T> * temp = NULL;
        temp = first;
        first = first->next;
        delete temp;
        first->prev = last;
        last->next = first;
    }
    iCount--;
}

template<class T>
void DoublyList<T>::deleteLast()
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
        struct node<T> * temp = NULL;
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

template<class T>
void DoublyList<T>::deleteAtPos(int pos)
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
        struct node<T> * temp = NULL;
        struct node<T> * extra = NULL;
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

template<class T>
int DoublyList<T>::count()
{
    return iCount;
}

template<class T>
void DoublyList<T>::display()
{
    do
    {
        cout << first->data << "<->";
        first = first->next;
    } while (first != last->next);
}

int main()
{
    DoublyList<int> sobj;
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