#include <iostream>

using namespace std;
const int SIZE_ARRAY = 100;
int main()
{
    int n, temp;

    cout<< "Enter n = ";
    cin>>n;

    int arr[SIZE_ARRAY];
    bool flag = true;

    for(int i = 0; i< n; i++)
        {
             cout<<"arr [" << i << "] = ";
             cin>> arr[i];
        }

    for(int i = 0; i < n; i++)
        {
            if((i-1) % 2 == 0 && i != 0)
            {
                if(!(arr[i-1] < arr[i-2] && arr[i-1] < arr[i])) flag = false;
            }
            else if (!(arr[i-1] > arr[i-2] && arr[i-1] > arr[i])) flag = false;

        }
    if (flag == true) cout<<"Zig-Zag"<<endl ;
    else cout<<"Nope..."<<endl;

    return 0;
}
