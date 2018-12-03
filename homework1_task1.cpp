#include <iostream>
#include <cmath>

using namespace std;

int const SIZE_ARRAY = 100;
int main()
{
    int n, helper;
    double m;

    cout<< "Enter n = "; cin>>n;

    int arr[SIZE_ARRAY];
    for(int i = 0; i< n; i++)
        {
         cout<<"arr [" << i << "] = ";
         cin>> arr[i];
        }
    m = (double)n / 2;
    m = ceil(m);

    for(int i = 0; i< m ; i++)
    {
        cout<< arr[i]<< " ";
    }

    //bool flag = false;
    for (int i = m +1 ; i < n ; i++)
    {
        for (int j = m; j < n - 1; j++)
        {   if (arr[i] > arr [j])
                {
                    helper = arr [j];
                    arr [j] = arr [i];
                    arr [i] = helper;
                }

        }

    }


     {
         for ( int i = m; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }
     }

    return 0;
}
