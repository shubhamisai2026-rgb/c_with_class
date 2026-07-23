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
class Stack
{
private:
    T iCount;
    struct node<T> * first;

public:
    Stack();
    void push(T no);
    T pop();
    T peep();
    void display();
    int count();
};


template<class T>
Stack<T>::Stack()
{
    this->iCount = 0;
    this->first = NULL;
}


template<class T>
void Stack<T>::push(T no)
{
    struct node<T>* newnode = new struct node<T>;
    newnode->next = NULL;
    newnode->data = no;

    newnode->next = first;
    first = newnode;

    iCount++;
}

template<class T>
T Stack<T>::pop()
{
    if (first == NULL)
    {
        cout << "the stack is empty..";
        return -1;
    }
    else
    {
        T iValue = 0;
        struct node<T> * temp = NULL;
        temp = first;
        iValue = temp->data;
        first = first->next;
        delete temp;
        return iValue;
    }
}

template<class T>
T Stack<T>::peep()
{
  return first->data;
}

template<class T>
void Stack<T>::display()
{
    struct  node<T>* temp = NULL;
    temp = first;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

template<class T>
int Stack<T>::count()
{
    return iCount;
}



int main()
{
    Stack <int>sobj;
    int iRet = 0;
    sobj.push(11);
    sobj.push(21);
    sobj.push(31);
    iRet = sobj.count();
    cout << "total elements in the stack is:" << iRet << "\n";
    sobj.display();
    cout << "\n";
    int iRemove = 0;
    iRemove = sobj.pop();
    cout << "the removed value is:" << iRemove;
    cout << "\n";
    sobj.display();
}