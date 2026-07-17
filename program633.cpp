#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;
int main()
{
    PNODE newnode = NULL;
    newnode = new NODE; //struct node=NODE
    newnode->data = 11;
    newnode->next = NULL;
    cout << newnode->data << endl;
    delete (newnode);
    return 0;
}