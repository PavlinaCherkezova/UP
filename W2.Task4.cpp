#include <iostream>

using namespace std;

int main()
{
    int number, sto, des , ed, sum;

    cout<<"enter positive 3 digit number: ";
    cin>>number;

    if (number > 0)
        {
            sto= number/100;
            des= (number/10)%10;
            ed = number%10;
            cout<<sto<<endl<<des<<endl<<ed<<endl;

            sum= sto+des+ed;
            cout<<"Sum= "<<sum<<endl;

        }
        else cout<< "invalid number"<<endl;
    return 0;
}
