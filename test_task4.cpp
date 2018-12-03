
#include <iostream>

using namespace std;
void input (int arr[100], int &n);
int *bigger (int arr[100], int n);
int main()
{
    int arr[100], n;
    input(arr, n);
    cout<<bigger (arr, n);
    int show = *bigger (arr, n);
    cout<<endl<< show;


    return 0;
}
int *bigger (int arr[100], int n)
{
    int temp = 0, index = 0,*ptr_temp;
    int stop = n - 2;
    if(arr[index] - arr[index +1] == 2)
    {
        if (temp < arr[index])
            {
                temp = arr[index];
                ptr_temp = &arr[index];
            }
    }
    else bigger (arr + 1,n);
    if (arr[index] == arr [stop] && temp == 0) return nullptr;
    else if (arr[index] == arr[stop])
        return ptr_temp;


}
void input (int arr[100], int &n)
{
    cout<<"Enter n: "; cin>>n;

    cout<<"Enter numbers: ";
    for(int i = 0; i < n; i++)
    {
            cin>>arr[i];

    }
}

