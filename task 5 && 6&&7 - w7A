#include <iostream>

using namespace std;

int main()
{
    //task 5

    /*int n, w;
    cin>>n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];

    }
    for(int i = 0; i< n-1; i++)
    {
        for( int j = i + 1; j< n; j++)
            if (arr[i]>arr[j])
        {
            w= arr[i];
            arr[i] = arr [j];
            arr [j] = w ;
        }
    }
    for (int i = 0; i < n; i++)
        cout<<arr [i]<<endl;
*/
    //task 6

     int n, m, w;
    cin>>n>>m;

    int arn[100];
    for (int i = 0; i < n; i++)
    {
        cin>> arn[i];
           int n;
    cin>>n;

    int arr[100][100];
    for (int i= 0; i <n; i++)
       {
          for( int j= 0; j <n; j++)
            {
                cin>> arr[i][j];
            }
       }
       cout<<endl<<endl;
    for (int i= 0; i <n; i++)
       {
          for( int j= 0; j <n; j++)
            {
                cout<< arr[i][j]<< " ";
            }
            cout<<endl;
       }
    cout<< "Glaven diagonal: ";
    for (int i= 0; i <n; i++)
       {

          for( int j= 0; j <n; j++)
            {
                if(i == j) cout<< arr[i][j]<< " ";
            }

       }
       for (int i=0; i<n; i++) cout<<arr[i][i];//s edin cikyl
    cout<<endl;

    cout<< "Vtorichen diagonal: ";
    for (int i= 0; i < n; i++)
       {

          for( int j= 0; j < n; j++)
            {
                if(i== n-j-1) cout<< arr[i][j]<< " ";
            }

       }

    }
    int arm[100];
    for (int i = 0; i < m; i++)
    {
        cin>> arm[i];

    }

    int arr [200];
    for (int i= 0; i < n; i ++ )
    {
        arr [i] = arn[i];
    }
    for (int i= n; i < m+ n; i ++ )
    {
        arr [i] = arm[i-n];
    }
    for (int i =0 ;i< n+m; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i< n+m-1; i++)
    {
        for( int j = i + 1; j< n+m; j++)
            if (arr[i]>arr[j])
        {
            w= arr[i];
            arr[i] = arr [j];
            arr [j] = w ;
        }
    }
    for (int i = 0; i < n+m; i++)
        cout<<arr [i]<<endl;



    return 0;
}
