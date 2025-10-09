#include <iostream>
using namespace std;
void getmin(int arr[], int num)
{
    int min = INT_MAX;
    // int mini = INT_MAX;
    for (int i = 0; i < num; i++)
    {
        // mini = min(mini,arr[i]);
        // or
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "minimun number :"<<min << " " << endl;
}
void getmax(int arr[], int num)
{
    int max = INT_MIN;
    // int maxi = INT_MIN;
    for (int i = 0; i < num; i++)
    {
        // naxi = max(mxai,arr[i]);
        // or
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout <<"maximun number :" << max << " " << endl;
}
int main()
{
    int arr[100];
    int size;
    cout << " enter the size. " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    getmin(arr, size);
    getmax(arr,size);
}