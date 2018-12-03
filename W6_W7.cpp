#include <iostream>

using namespace std;
int const SIZE_ARRAY = 100;

int main()
{
    //task 00
  /*  int n, maximum = INT_MIN, minimum = INT_MAX;
    int arr[SIZE_ARRAY];

    cout<<"Enter n: ";
    cin>> n;

    for (int i = 0; i<n ; i++)
    {
        cout<<"arr ["<<i<<"] = ";
        cin>>arr[i];
    }
    //task1
    int index_min = 0, index_max = 0, helper;
     for (int i = 0; i<n ; i++)
    {
        if (arr[i] > maximum)
            {
                maximum = arr[i];
                index_max = i;
            }
        if (arr[i] < minimum)
            {
                minimum = arr[i];
                index_min = i;
            }
    }

    cout<<endl<<"MAX = "<< maximum<<endl<<"MIN = "<< minimum<<endl;

    helper = arr[index_max];
    arr[index_max] = arr[index_min];
    arr[index_min] = helper;

    for (int i = 0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    */
    //task02
    /*
    int arr[SIZE_ARRAY], n;

    cout<<"Enter n: ";
    cin>> n;

    for (int i = 0; i<n ; i++)
    {
        cout<<"arr ["<<i<<"] = ";
        cin>>arr[i];
    }
    int counter = 0, last_digit, number, sum = 0;
    for (int i = 0; i<n; i++)
    {
       number = arr[i];
       while (number != 0)
       {
           last_digit = number % 10;
           sum += last_digit;
           number /= 10;
       }

       if (sum / 10 == 0)
       {
           counter ++;
        }
        sum = 0;
    }
    if(counter != 0) cout<<"Count of numbers: "<< counter<<endl;
    else cout<< "No such numbers"<<endl;
        */
        //task3
        /*
    int arr[SIZE_ARRAY], n;

    cout<<"Enter n: ";
    cin>> n;

    for (int i = 0; i<n ; i++)
    {
        cout<<"arr ["<<i<<"] = ";
        cin>>arr[i];
    }
    int sum = 0;
    bool flag = false;
    for (int i = 0; i<n; i++)
    {
        if(arr[i] > 0 && arr[i]!= 0 && (flag == false))
        {
            flag = true;
        }
        if ( flag== true )
        {
            sum += arr[i];
            cout<<arr[i]<<" ";
        }
    }
    cout<<sum;
    */
    //task4
    /*
    int arr[SIZE_ARRAY], n, num;
    cout<<"enter n: "; cin>>n;

    for (int i = 0; i<n ; i++)
    {
        cout<<"arr ["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"enter num: "; cin>>num;
    int index_num, counter = 0, number, last_digit;
    for (int i = 0; i<n ; i++)
    {
        number = arr[i];
        for (int j= 0; j<n && (number != 0) ; j++)
        {
           last_digit = number % 10;
           if(last_digit == num)
                {
                   counter ++;
                   index_num = i;
                   cout<<"found at arr["<<index_num<<"] "<<endl;

                }
           number /= 10;
        }


    }
    cout<<"counter: "<<counter<<endl;
*/
//task6

   /* char arr[SIZE_ARRAY], symbol;
    int n;
    cout<<"enter n: "; cin>>n;

    for (int i = 0; i<n ; i++)
        {
            cout<<"arr ["<<i<<"] = ";
            cin>>arr[i];
        }
        cout<<"enter symbol: "; cin>>symbol;
    int  counter = 0, number;
        for (int i = 0; i<n ; i++)
        {
               if(arr[i] == symbol)
                    {
                       counter ++;
                       arr[i] = '*';
                    }
        }

    cout<<"counter: "<<counter<<endl;

    for( int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    */
    //task 5
/*
    int arr[SIZE_ARRAY];
    int n;
    cout<<"enter n: "; cin>>n;

    for (int i = 0; i<n ; i++)
        {
            cout<<"arr ["<<i<<"] = ";
            cin>>arr[i];
        }
    bool flag = true;

    for (int i = 0; i <= n/2; i++)
    {
        if (arr[i] != arr[n - i -1])
        {
            flag = false;
        }
    }
    if(flag) cout<<"Like a mirror on the wall..."<<endl;
    else cout<<"Broken mirror, dude "<<endl;
*/

    //task7
    /*
    int arr[SIZE_ARRAY];
    int n;
    cout<<"enter n: "; cin>>n;

    for (int i = 0; i<n ; i++)
        {
            cout<<"arr ["<<i<<"] = ";
            cin>>arr[i];
        }
    int hundreds, sum_hun =0, counter = 0;
    double sum_odd = 0;
    for (int i = 0; i < n; i++)
    {
        hundreds = (arr[i] / 100) %10;
        if(hundreds == 6) sum_hun += arr[i];
        if(arr[i] % 2 != 0)
        {
                sum_odd += arr[i];
                counter ++ ;
        }
    }
    cout<<"Sum of _6__ numbers: "<< sum_hun<<endl;
    sum_odd /= counter;
    cout<<"odds sredno aritmetichno: "<<sum_odd<<endl;
    cout<<counter;
*/
    //week7, task 00
   /* int arr[SIZE_ARRAY][SIZE_ARRAY];
    int n, m;
    cout<<"enter rows: "; cin>>n;
    cout<<"enter colums: "; cin>>m;

    for (int i = 0; i<n ; i++)
        {
            for (int j =0; j<m; j++)
            {
                cout<<"arr ["<<i<<"]["<<j<<"] = ";
                cin>>arr[i][j];
            }
        }
       }
    for (int i = 0; i<n ; i++)
        {
            for (int j =0; j<m; j++)
            {
                arr[i][j] += 10;
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    //task2
    int MIN = INT_MAX, MAX = INT_MIN;
    for (int i = 0; i<n ; i++)
        {
            for (int j =0; j<m; j++)
            {
                if(arr[i][j] < MIN) MIN = arr[i][j];
                if(arr[i][j] > MAX) MAX = arr[i][j];
            }

        }
    cout<<"Max: "<<MAX<<endl<<"Min: "<<MIN<<endl;
    */
    //task3
    /*int arr[SIZE_ARRAY][SIZE_ARRAY];
    int n, m;
    cout<<"enter rows: "; cin>>n;
    cout<<"enter colums: "; cin>>m;

    for (int i = 0; i<n ; i++)
        {
            for (int j =0; j<m; j++)
            {
                cout<<"arr ["<<i<<"]["<<j<<"] = ";
                cin>>arr[i][j];
            }
        }
    int GL=0, VT=0, podGL=0, podVT=0, nadGL=0, nadVT=0;

    for (int i = 0; i<n ; i++)
        {
            for (int j =0; j<m; j++)
            {
                if(i == j) GL+= arr[i][j];
                if(i + j == n - 1) VT+= arr[i][j];
                if(j < i) podGL+= arr[i][j];
                if(i < j) nadGL+= arr[i][j];
                if(i + j > n-1) podVT+= arr[i][j];
                if(i + j < n-1) nadVT+= arr[i][j];
            }
        }
    cout<<GL<<endl<<VT<<endl<<podGL<<endl<<nadGL<<endl<<podVT<<endl<<nadVT<<endl;
*/
/*  //task4
     int arr[SIZE_ARRAY][SIZE_ARRAY];
    int n, m, x, index_i,index_j;
    cout<<"enter rows: "; cin>>n;
    cout<<"enter colums: "; cin>>m;
    cout<<"enter x: "; cin>>x;

    for (int i = 0; i<n ; i++)
        {
            for (int j =0; j<m; j++)
            {
                cout<<"arr ["<<i<<"]["<<j<<"] = ";
                cin>>arr[i][j];
            }
        }
    for( int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        if(arr[i][j] == x)
        {
                index_i = i;
                index_j = j;
                arr[i][j] *= 10;
                cout<<"arr["<<index_i<<"]["<<index_j<<"] "<<endl;
        }
    }
    for( int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
*/
    //task 5
    /*
    int A_matrix[SIZE_ARRAY][SIZE_ARRAY],B_Matrix[SIZE_ARRAY][SIZE_ARRAY] ;
    int n, m;
    cin>>n>>m;

    for( int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout<<"arr ["<<i<<"]["<<j<<"] = ";
            cin <<A_matrix[i][j];
        }

    }
    for (int i = 0; i<n; i++)
    {
         for(int k = 0; k<m; k++)
        {
            cout<<"arr ["<<i<<"]["<<k<<"] = ";
            cin <<B_matrix[i][k];
        }
    }
      for (int i = 0; i<n; i++)
    {
         for(int k = 0; k<m; k++)
        {
            cout<<"arr ["<<i<<"]["<<k<<"] = ";
            cin <<B_matrix[i][k];
        }
        for(int j = 0; j<m; j++)
        {
            cout<<"arr ["<<i<<"]["<<j<<"] = ";
            cin <<A_matrix[i][j];
        }
    }
    */
    //dopylnitelnite
    //task1
    /*
    int arr[SIZE_ARRAY][SIZE_ARRAY];
    int n; cin>>n;
    for (int i = 0; i<n ; i++)
        {
            for (int j =0; j<n; j++)
            {
                cout<<"arr ["<<i<<"]["<<j<<"] = ";
                cin>> arr[i][j];
            }
        }
    bool flag = true;
    for (int i = 0; i<n ; i++)
        {
            for (int j =0; j<n && flag; j++)
            {
               if(arr[i][j] != arr[j][i]) flag = false;
            }
        }
    if(flag) cout<<"simetrichna"<<endl;
    else cout<<"No "<<endl;
*/
//task2
    /*int n, m, counter = 0, sum = 1;
    cin>>n>>m;
    bool flag = false;
    for(int i = n; i <= m; i++)
    {

        for(int j = 2; j <= i; j++)
        {
            if(i % j == 0) sum += j;
        }

        for(int k = 2; k < sum/2 && flag==false; k++)
        {
            if (sum % k != 0) flag = false;
            else flag = true;

        }
        if (flag == false ) counter ++;
        sum = 1;
        flag= false;
    }
    cout<<counter<<endl;
*/

    int n, m, arr[SIZE_ARRAY], brr[SIZE_ARRAY],crr[SIZE_ARRAY];
    cin>>n;
    for (int i = 0; i<n ; i++)
    {
        cout<<"arr ["<<i<<"] = ";
        cin>>arr[i];
    }

     for (int i = 0; i<n ; i++)
    {
        crr[i] = arr[i];
    }

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j= i +1; j < n; j++)
        {
            if (arr[i] == crr[j]) flag = false;
        }
    }
    if (flag)
        {
             cin>>m;
             for (int i = 0; i<m ; i++)
            {
                cout<<"brr ["<<i<<"] = ";
                cin>>brr[i];
            }
            bool found = false;
            for(int i = 0; i<n; i++)
            {
                found = false;
                for (int j = 0; j < m && found == false; j++)
                {
                    if(arr[i] == brr[j]) found = true;
                }

            }
            if (found == true) cout<<"Yep"<<endl;
            else cout<<"Nope"<<endl;
        }
    return 0;
}
