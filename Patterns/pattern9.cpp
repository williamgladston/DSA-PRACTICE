#include <iostream>
using namespace std;
int main()
{
    int row, col, num;
    cout << "enter the number :";
    cin >> num;

    row = 1;
    while (row <= num)
    {
        col = 1;
        while (col <= row)
        {
            cout << row - col + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}