#include <iostream>

using namespace std;
int *IsThere(char first[100], char second [100]);
int main()
{
    char first[100], second [100];
    int *address = IsThere(first, second);
    cout<<address;
    cout<<endl<<*address;


    return 0;
}
int *IsThere(char first[100], char second [100])
{
    bool flag = true;
    int *address;
    cout<<"first: "; cin>> first;
    cout<<"second: "; cin>> second;

    for(int i = 0; first[i] != '\0'; i++)
    {
        if(first[i] == second[0])
        {
            address = (int *)first[i];
            for(int j = 1; second[j] != '\0'; j++)
            {
                if (first[i + 1] != second[j]) flag = false;
                else flag = true;
            }
        }
    }
    if(flag)
        return address;
    else
        return nullptr;

}
