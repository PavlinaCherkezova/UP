#include <iostream>

using namespace std;
void order(int arr[100][100], int rows, int columns);
void input (int arr[100][100], int rows, int columns);
void output (int arr[100][100], int rows, int columns);

int main()
{
    int arr[100][100], rows, columns;

    cout<<"rows = "; cin>>rows;
    cout<<"columns = "; cin>>columns;
    input(arr, rows,columns);
    order(arr, rows, columns);
    output(arr, rows, columns);

    return 0;
}
void order(int arr[100][100], int rows, int columns)
{
     int value = 0;
     for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns - 1; j++)
        {
            for(int k = 0; k < columns; k++)
            {
                if(arr[i][k] < arr[i][k + 1])
                {
                    value = arr[i][k];
                    arr[i][k] = arr[i][k+1];
                    arr[i][k + 1] = value;
                }
            }
        }
    }

}
void input (int arr[100][100], int rows, int columns)
{
    cout<<"Enter array: ";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
           cin>>arr[i][j];
        }
    }
}
void output (int arr[100][100], int rows, int columns)
{
    for(int i = 0; i < rows; i++)
    {
         for(int j = 0; j < columns; j++)
        {
           cout<<arr[i][j];
        }
        cout<<endl;
    }

}
