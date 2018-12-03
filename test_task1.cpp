#include <iostream>

using namespace std;
int sum_fact (double number);
int fact (int num) ;
int main()
{
    int n;
    cout<<sum_fact(n);

    return 0;
}
int sum_fact (double number)
{
    int sum = 0, factoriel = 0;
    bool flag = true;

    cout<<"Enter number: ";
    cin>>number;

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
