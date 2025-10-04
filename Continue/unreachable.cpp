#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i <= 5; i++)
    {
        cout << "hii ";
        cout << "hey ";
        continue;
        // unreachable part of code
        cout << "hello ";
    }
}