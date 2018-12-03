 #include <iostream>
#include <cmath>

using namespace std;

const int SIZE_ARRAY = 100;
int main()
{
    int n,m;
    cout<<"Enter n: "; cin>>n;
    cout<<"Enter m: "; cin>>m;

    int arr[SIZE_ARRAY][SIZE_ARRAY];
    for(int i = 0; i< n; i++)
        {
            for(int j =0; j < m; j++)
            {
                cout<<"arr [" <<i<<"] [" <<j << "] = ";
                cin>> arr[i][j];
            }
        }

    int sum_rows = 0, sum_colums = 0, biggest_rows = 0, biggest_colums = 0, helper;
    for(int i = 0; i< n; i++)
        {
           for(int j =0; j < m; j++)
            {
               sum_rows += arr[i][j];
            }

            helper = sum_rows;
            if (biggest_rows == 0) biggest_rows = sum_rows;
            if (biggest_rows < sum_rows) biggest_rows = sum_rows ;
            sum_rows = 0 ;
        }
    cout<<endl<<"Biggest sum from rows "<<biggest_rows;

    for(int j = 0; j< m; j++)
        {
           for(int i =0; i < n; i++)
            {
               sum_colums += arr[i][j];
            }

            helper = sum_colums;
            if (biggest_colums == 0) biggest_colums = sum_colums;
            if (biggest_colums < sum_colums) biggest_colums = sum_colums ;
            sum_colums = 0 ;
        }
    cout<<endl<<"Biggest sum from columns "<<biggest_colums<<endl;

    if(biggest_rows > biggest_colums) cout<<"Maximum sum from rows are > then maximum sum from columns"<<endl;
    else cout<< "Maximum sum from rows are < then maximum sum from columns"<<endl;

     return 0;
}
