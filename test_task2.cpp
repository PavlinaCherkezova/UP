#include <iostream>

using namespace std;
void input (double arr [3][3]);
void change (double arr[3][3]);
void IsFound (double arr[3][3], double k);
int sum_fact (double number);
int fact (int num) ;
int main()
{
    double matrix[3][3], k;
    change(matrix);
    IsFound(matrix, k);

    return 0;
}
void change (double arr[3][3])
{
    int number;

    input(arr);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if (i >= j)
            {
                number = arr[i][j];
                arr[i][j] = sum_fact(number);
            }
        }
    }
}
void IsFound(double arr[3][3], double k)
{
    cout<<"Enter number:";
    cin>>k;
    bool flag = false;

    for(int i = 0; i < 3 && flag == false; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == k) flag = true;
        }
    }

    if (flag)
        cout<<"Yes";
    else
        cout<<"No";


}
void input (double arr[3][3])
{
    cout<<"Enter matrix 3x3: ";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
}
int sum_fact (double number)
{
    int sum = 0, factoriel = 0;
    bool flag = true;

    for(int i = 0; i < number && flag == true; i ++)
    {
        factoriel = fact(i);
        if (factoriel <= number) sum += factoriel;
            else flag = false;
    }
    return sum;

}
int fact (int num)
{
    int result = 1;

    if (num == 0 || num == 1)
        return 1;

    for(int i = 2; i <= num ; i++)
    {
        result *= i;
    }
    return result;

}
