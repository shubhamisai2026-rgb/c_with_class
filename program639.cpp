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
    int iCount = 0;

public:
    SinglyList()
    {
        cout << "inside constructor..." << endl;
        this->first = NULL;
        this->iCount = 0;
    }
    int count()
    {
        return this->iCount;
    }
    void insertFirst(int no)
    {
    }
    void insertLast(int no)
    {
    }
    void insertAtPos(int no, int pos)
    {
    }
    void deleteFirst()
    {
    }
    void deleteLast()
    {
    }
    void deleteAtPos(int pos)
    {
    }
};
int main()
{
    SinglyList sobj;
    return 0;
}