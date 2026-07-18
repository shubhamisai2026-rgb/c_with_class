#include <iostream>
#pragma pack(1)

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
}
void DoublyList::insertLast(int no)
{
}
void DoublyList::insertAtPos(int no, int pos)
{
}
void DoublyList::deleteFirst()
{
}
void DoublyList::deleteLast()
{
}
void DoublyList::deleteAtPos(int pos)
{
}
int DoublyList::count()
{
}
void DoublyList::display()
{
}

int main()
{
    DoublyList dobj;
    return 0;
}