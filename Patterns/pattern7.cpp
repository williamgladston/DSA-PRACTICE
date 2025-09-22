#include <iostream>
using namespace std;
int main()
{
    int row, col, num, count;
    row = 1;
    cout << "enter the number :";
    cin >> num;
    count = 1;
    while (row <= num)
    {
        col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }
}