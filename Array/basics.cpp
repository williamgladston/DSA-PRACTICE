#include <iostream>
using namespace std;
void printINT_arr(int arr[], int n)
{
    //sizeof(arr) will give 8
    // using size of here will give 8bytes answer where as the size is 10
    //becoz the arr in fuction is int* pointer to array not actual array so it will give size of pointer instead of actual array
    //size of pointer also depend on systen 32 will give 4 and 64 give 8
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    // entire arry intialized with zero
    int frist[10] = {0};
    // array initialized with garbage value
    int second[10];
    // arr holds the base address
    // arr[4] means base + 4 * sizeof (datatype)

    cout << "number at index  9. " << frist[9] << endl;

    cout << "number at index  9. " << second[9] << endl;
    printINT_arr(frist, 10);
    printINT_arr(second, 10);

    int third[10] = {5, 6, 7};
    printINT_arr(third, 10);

    int forth[10] = {};
    printINT_arr(forth, 10);
}