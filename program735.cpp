#include <iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyList
{
private:
    struct node<T> *first;
    struct node<T> *last;
    int iCount;

public:
    SinglyList();
    void insertFirst(T no);
    void insertLast(T no);
    void insertAtPos(T no, int pos);
    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int pos);
    void display();
    int count();
};

template <class T>
SinglyList<T>::SinglyList()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

template <class T>
void SinglyList<T>::insertFirst(T no)
{
    struct node<T> *newnode = NULL;
    newnode = new struct node<T>;
    newnode->next = NULL;
    newnode->data = no;
    if (first == NULL && last == NULL)
    {
        this->first = newnode;
        this->last = newnode;
    }
    else
    {
        newnode->next = this->first;
        this->first = newnode;
    }
    last->next = this->first;
    iCount++;
}

template <class T>
void SinglyList<T>::insertLast(T no)
{
    struct node<T> *newnode = NULL;
    newnode = new struct node<T>;
    ;
    newnode->next = NULL;
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
        last->next = first;
    }

    iCount++;
}

template <class T>
void SinglyList<T>::insertAtPos(T no, int pos)
{
    if ((pos < 1) || (pos > iCount + 1))
    {
        cout << "invalid position...\n";
        return;
    }
    else if (pos == 1)
    {
        insertFirst(no);
    }
    else if (pos == iCount + 1)
    {
        insertLast(no);
    }
    else
    {
        struct node<T> *newnode = NULL;
        newnode = new struct node<T>;
        newnode->next = NULL;
        newnode->data = no;
        int i = 0;
        struct node<T> *temp = NULL;
        temp = first;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    iCount++;
}

template <class T>
void SinglyList<T>::deleteFirst()
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
        free(temp);
    }
    last->next = first;
    iCount--;
}

template <class T>
void SinglyList<T>::deleteLast()
{
    if (first == NULL && last == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete last;
        first = NULL;
    }
    else
    {
        struct node<T> *temp = NULL;
        temp = first;
        do
        {
            temp = temp->next;
        } while (temp != last->next);
        delete last;
        last = temp;
        last->next = first;
    }
    iCount--;
}

template <class T>
void SinglyList<T>::deleteAtPos(int pos)
{
    if (pos < 1 && pos > iCount)
    {
        cout << "invalid position...";
        return;
    }
    else if (pos == 1)
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
        struct node<T> *temp = NULL;
        temp = first;
        struct node<T> *extra = NULL;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        extra = temp->next;
        temp->next = extra->next;
        delete extra;
    }
    iCount--;
}

template <class T>
void SinglyList<T>::display()
{
    if (first == NULL && last == NULL)
    {
        return;
    }
    do
    {
        cout << first->data << "->";
        first = first->next;
    } while (first != last->next);
}

template <class T>
int SinglyList<T>::count()
{
    return iCount;
}
int main()
{
    SinglyList<int> sobj;
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