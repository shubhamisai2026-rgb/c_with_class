#include <iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class SinglyList
{
public:
    PNODE first;
    int iCount = 0;
    SinglyList()
    {
        this->first = NULL;
        this->iCount = 0;
    }
};

int main()
{
    SinglyList sobj;
    sobj.first = NULL;
    sobj.iCount = 15; // drawback
}