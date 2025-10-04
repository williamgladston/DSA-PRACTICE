#include <iostream>
using namespace std;
int main()
{
    int num;
    bool isPrime = 1;
    cout << "enter the number  : ";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
        }
    }
    if (isPrime == 1)
    {
        cout << "the given number is prime ";
    }
    else
    {
        cout << "the given number is not prime ";
    }
}