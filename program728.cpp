#include <iostream>
using namespace std;

class Array
{
public:
    int size;
    int *arr;
    Array(int no)
    {
        size = no;
        arr = new int[size];
    }
    ~Array()
    {
        delete[] arr;
    }
    void accept()
    {
        int i = 0;
        cout << "enter the array elements:\n";
        for (i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    void display()
    {
        int i = 0;
        cout << "elements of the array is:\n";
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << "\n";
        }
    }

    int sum()
    {
        int sum = 0;
        int i = 0;
        cout << "sum of the all elements is:\n";
        for (i = 0; i < size; i++)
        {
            sum = sum + arr[i];
        }
        return sum;
    }
};

int main()
{
    Array aobj(5);
    aobj.accept();
    aobj.display();
    cout << "summation of the numbers is:" << aobj.sum();
    return 0;
}