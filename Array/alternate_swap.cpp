#include <iostream>
using namespace std;
void swaparray(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printarray(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}
int main()
{
    // odd indexing
    int arr[5] = {23, 4, 5, 12, 5};
    // even indexing
    int arr1[6] = {23, 4, 556, 34, 7, 45};
   //odd
    printarray(arr,5);
    swaparray(arr,5);
    printarray(arr,5);
    //even
    printarray(arr1,6);
    swaparray(arr1,6);
    printarray(arr1,6);
}