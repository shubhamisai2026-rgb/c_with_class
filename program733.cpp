#include <iostream>
#pragma pack(1)
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Queue
{
private:
    int iCount;
    struct node<T> *first;

public:
    Queue();
    void Enqueue(T no);
    T Dequeue();
    void display();
    int count();
};

template <class T>
Queue<T>::Queue()
{
    this->iCount = 0;
    this->first = NULL;
}

template <class T>
void Queue<T>::Enqueue(T no)
{
    struct node<T> *newnode = new struct node<T>();
    newnode->next = NULL;
    newnode->data = no;
    if (first == NULL)
    {
        first = newnode;
    }
    else
    {
        struct node<T> *temp = NULL;
        temp = first;
        while (temp->next != NULL)
        {
            temp = first->next;
        }
        temp->next = newnode;
    }
    iCount++;
}

template <class T>
T Queue<T>::Dequeue()
{
    if (first == NULL)
    {
        cout << "queue is empt..\n";
        return -1;
    }
    else
    {
        struct node<T> *temp = NULL;
        temp = first;

        T iValue = 0;
        iValue = first->data;

        first = first->next;
        delete temp;
        iCount--;
        return iValue;
    }
}

template <class T>
void Queue<T>::display()
{
    struct node<T> *temp = NULL;
    temp = first;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null" << "\n";
}

template <class T>
int Queue<T>::count()
{
    return iCount;
}

int main()
{
    Queue<int> qobj;
    qobj.Enqueue(11);
    qobj.Enqueue(21);
    qobj.Enqueue(31);
    qobj.display();
    int iRemove = 0;
    iRemove = qobj.Dequeue();
    cout << "remove node:" << iRemove;
    cout << "\n";
    qobj.display();
    int iRet = 0;
    iRet = qobj.count();
    cout << "total nodes are:" << iRet << "\n";
}