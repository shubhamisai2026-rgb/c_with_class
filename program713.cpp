#include <iostream>
using namespace std;
template <class T>

T addition(T a, T b)
{
    T ans;
    ans = a + b;
    return ans;
}

int main()
{
    cout << addition(5, 2) << "\n";
    cout << addition(7.2f, 2.2f) << "\n";
    cout << addition(6.4, 5.2);
    return 0;
}