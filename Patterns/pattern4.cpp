#include <iostream>
using namespace std;
int main()
{
    int row, col, num, count;
    cout << "enter the number : " << endl;
    cin >> num;
    count = 1;
    row = 1;
    while (row <= num)
    {
        col = 1;
        while (col <= num)
        {
            cout <<"\t"<< count<<"\t";
            count = count + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}