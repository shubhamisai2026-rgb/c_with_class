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
    PNODE first;       //head pointer
    SinglyList()
    {
        cout << "inside constructor..." << endl;
        this->first=NULL;    
    }
};

int main()
{
    SinglyList sobj;
    return 0;
}