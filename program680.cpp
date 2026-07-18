#include <iostream>
#pragma pack(1)
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

#pragma pack(1)

class DoublyList
{
private:
    PNODE first;
    PNODE last;
    int iCount;
};

int main()
{
    DoublyList dobj;
    cout << sizeof(dobj);
    return 0;
}