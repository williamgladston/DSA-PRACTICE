#include <iostream>
using namespace std;
int main()
{
    int row, col, num, count;
    cout << "enter the number :";
    cin >> num;
    row = num;
    count = num;

    while (row >= 0)
    {
        col = 1;

        while (col <= (num - row + 1))
        {
            cout << count - row + col;
            col = col + 1;
        }
        row = row - 1;
        cout << endl;
    }
}