#include <iostream>
using namespace std;
int main()
{
    int row, col, num;
    char alphabet;
    cout << "enter the number :";
    cin >> num;
    row = 1;
    while (row <= num)
    {
        col = 1;
        while (col <= num)
        {
            alphabet = ('A' + row - 1);
            cout << alphabet;
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }
}