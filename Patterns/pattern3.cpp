#include <iostream>
using namespace std;
int main()
{
    int row, col, num;
    row = 1;
    cout << "enter the number " << endl;
    cin >> num;
    while (row <= num)
    {
        col = 1;
        while (col <= num)
        {

            cout << " * ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}