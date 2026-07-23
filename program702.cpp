#include<iostream>
using namespace std;
#pragma pack(1)

struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Stack
{
    private:
    int iCount;
    PNODE first;
    public:
    Stack();
    void push(int no);
    void pop();   
    int peep();
    void display();
    int count();
};

Stack::Stack()
{
    this->iCount=0;
    this->first=NULL;
}

void Stack::push(int no)
{

}
void Stack::pop()
{

}
int Stack::peep()
{

}
void Stack::display()
{

}
int Stack::count()
{

}
int main()
{
    
    Stack sobj;
    return 0;
}