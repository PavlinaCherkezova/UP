#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    int x, y;
    int r=6;

    cout<<"x= "; cin>>x;
    cout<<"y= "; cin>>y;

    if(abs(x)<=r && abs(y)<=r)
        cout<<"Yes.";
    else cout<<"No.";


    return 0;
}
