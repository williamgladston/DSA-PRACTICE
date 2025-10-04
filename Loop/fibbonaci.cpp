#include <iostream>
using namespace std;
int main()
{
    int a, b, num, nextnum;
    a = 0;
    b = 1;
    cout << "enter the number  : ";
    cin >> num;
    cout << a << " " << b << " ";
    for (int i = 0; i <= num; i++)
    {
        nextnum = a + b;
        cout << nextnum << " ";
        a = b;
        b = nextnum;
    }
}