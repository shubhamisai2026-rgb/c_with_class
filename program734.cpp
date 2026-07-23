
#include <iostream>
using namespace std;
#pragma pack(1)

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class SinglyList
{
private:
    struct node<T> * first;
    int iCount ;

public:
    SinglyList();
    int count();
    void display();
    void insertFirst(T no);
    void insertLast(T no);
    void insertAtPos(T no, int pos);
    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int pos);
};

template<class T>
SinglyList<T>::SinglyList()
{
    this->first = NULL;
    this->iCount=0;
}
template<class T>
void SinglyList<T>::insertFirst(T no)
{
     struct node<T> *newnode = NULL;
    newnode = new struct node<T>;
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

template<class T>
void SinglyList<T>::insertLast(T no)
{
    struct node<T> * newnode = NULL;
    newnode = new struct node<T>;
    newnode->data = no;
    newnode->next = NULL;
    if (this->first == NULL)
    {
        this->first = newnode;
    }
    else
    {
        struct node <T> * temp = NULL;
        temp = this->first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    this->iCount++;
}

template<class T>
void SinglyList<T>::insertAtPos(T no, int pos)
{
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
        struct node<T> * temp = NULL;struct node<T> * newnode=NULL;
        newnode=new struct node<T>;
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

template<class T>
void SinglyList<T>::deleteFirst()
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
        struct node<T> * temp = this->first;
        this->first = this->first->next;
        delete temp;
    }
    this->iCount--;
}

template<class T>
void SinglyList<T>::deleteLast()
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
        struct node<T> * temp = NULL;
        temp=first;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    this->iCount--;
}

template<class T>
void SinglyList<T>::deleteAtPos(int pos)
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
        struct node<T> * temp = NULL;
        temp = this->first;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        struct node<T> * extra = NULL;
        extra = temp->next;
        temp->next = extra->next;
        delete extra;
    }
    this->iCount--;
}

template<class T>
int SinglyList<T>::count()
{
    return this->iCount;
}

template<class T>
void SinglyList<T>::display()
{
    struct node<T> * temp = NULL;
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