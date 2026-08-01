#include<iostream>
using namespace std;
class Searching
{
    private:
    int iSize;
    int *arr;
    public:
          Searching(int no);
          ~Searching();
};
Searching::Searching(int no)
{
    iSize=no;
    arr=new int[iSize];
}
Searching::~Searching()
{
    delete[]arr;
}
int main()
{
    Searching sobj(5);
    return 0;
}