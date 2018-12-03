#include <iostream>

using namespace std;

int pow (int a, int n);
int counter1 (int num);
void new_arr (int arr[100], int numb, int n);
void output_new_arr (int arr[100], int n);
int mirror (int num, int n);
int *maximum (int arr[100], int n);
int main()
{
    int number, *adres, counter, arr[100];
    cout << "Enter number: "; cin>>number;

    counter = counter1 (number);
    new_arr(arr, number, counter);
    maximum(arr, counter);

    cout << "Reversed: "<< mirror(number, counter)<<endl;
    cout << "Biggest: ";

    output_new_arr(arr, counter);

    return 0;
}
int mirror (int num, int n)
{
    int temp = 0, neu = 0, counter = 0, k = num;

    counter = counter1(num);
    counter --;

    for(int i = 0; counter >= 0 ; i++)
    {
        temp = k % 10;
        k /= 10;
        neu += temp * pow(10,counter);
        temp = 0;
        counter --;
    }

    return neu ;
}
int *maximum (int arr[100], int n)
{
    int counter = n, temp = 0,value;

    for (int i = 0; i < counter; i ++)
    {
        for(int j = 0; j < counter - 1; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                value = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = value;
            }
        }
    }

    return arr;
}
int pow (int a, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= a;
    }
    return result;
}
int counter1 (int num)
{
    int temp = 0, neu = 0, counter = 0;
    while ( num > 0)
    {
        temp = num % 10;
        num /= 10;
        temp = 0;
        counter ++;
    }
    return counter;
}
void new_arr (int arr[100], int numb, int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = numb % 10;
        numb /= 10;
        arr[i] = temp;
        temp = 0;
    }
}
void output_new_arr (int arr[100], int n)
{
    int neu = 0, counter = n - 1;
    for(int i = 0; i < n; i++)
    {
        neu += arr[i] * pow(10, counter);
        counter --;
    }
    cout<<neu;
}

