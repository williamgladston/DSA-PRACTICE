#include <iostream>
using namespace std;
int main()
{
    int row, col, num;
    row = 1;
    cout << "enter the number :";
    cin >> num;
    while (row <= num)
    {
        col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }
}