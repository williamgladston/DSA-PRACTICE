#include <iostream>
using namespace std;
void printINT_arr(int arr[], int n)
{
    arr[0]=123;
    cout<< "inside function"<< endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "going to main"<<endl;
}
int main(){
    int arr[3]={1,3,4};
    int n =3;
    printINT_arr(arr,3);
 for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
     cout << endl;
}