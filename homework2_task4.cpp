#include <iostream>
#include <cmath>

using namespace std;
int *last2 (int arr[], int n);
void null (int arr[], int n, int *element);
int devide (double num);
void output(int arr[], int n);
void input(int arr[], int n);

int main()
{
    int n, arr[100], *address;

    cout<<"n= "; cin>>n;
    cout << "Enter number: ";
    input(arr, n);

    address = last2(arr,n);
    cout<<endl<< address;

    null(arr, n, address);
    output(arr, n);


    return 0;
}
int *last2 (int arr[],int n)
{
    int  real, result;
    bool flag = false;
    for(int i = n - 1; i >= 0 && flag == false; i--)
    {
        real = *(arr+i);
        result = devide (real);
        if(result == 1) flag = true;
        if(flag == true)
                return (arr + i);
    }
    if (flag == false) return nullptr;

}
void null (int arr[], int n, int *element)
{
    int current_index = element - arr;
    for(int i = 0; i < n; i++)
    {
       if(i >= current_index)
       {
           arr[i] = 0;
       }
    }
}
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
}
void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
}
int devide (double num)
{
    for (int i = 0; num > 1; i++)
    {
        num /= 2;
    }
     if(num == 1)return 1;

        else return 0;
}
