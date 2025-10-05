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

        digit = num % 10; // or bit = num & 1;
        if(digit == 1){

            ans = digit * pow(2, i) + ans;
           
        }
         i = i + 1;
            num = num/10;
    }
    cout << "answer in binary :" << ans << endl;
}