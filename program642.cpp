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
    void deleteAtPos(int pos);
};

SinglyList::SinglyList()
{
    cout << "inside constructor..." << endl;
    this->first = NULL;
    this->iCount = 0;
}
void SinglyList::display()
{
    PNODE temp;
    temp = this->first;
    while (temp != NULL)
    {
        cout << temp->data << "->" << endl;
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
 int SinglyList::count()
 {
    return this->iCount;
 }

 void SinglyList::insertFirst(int no)
 {

 }

 void SinglyList::insertLast(int no)
 {

 }

 void SinglyList::insertAtPos(int no,int pos)
 {

 }

 void SinglyList::deleteFirst()
 {

 }

 void SinglyList::deleteLast()
 {

 }

 void SinglyList::deleteAtPos(int pos)
 {

 }
 int main()
 {
    SinglyList sobj;
    sobj.display();
    return 0;
 }