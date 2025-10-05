#include <iostream>
using namespace std;
int main()
{
    int ans = 0;
    int num;
    int digit = 0;
    cout << "enter the number : ";
    cin >> num;
    int i = 0;
    while (num != 0)
    {
        digit = num % 2; // or bit = num & 1;
        ans = digit * pow(10, i) + ans;
        i = i + 1;
        num = num >> 1;
    }
    cout << "answer in binary :" << ans << endl;
}