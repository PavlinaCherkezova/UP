#include <iostream>

using namespace std;

int main()
{
    int number;

    cout<<"enter positive 4 digit number: ";
    cin>> number;

    int ed,des,sto,hil;
    if (number >0)
    {
        ed= number%10;
        des= (number/10)%10;
        sto= (number/100)%10;
        hil= number/1000;

        if((ed!=des)&&(sto!=hil)&&(des!=sto))
            cout<< "1"<<endl;
        else cout<<"0"<<endl;

    }

    else cout<<"invalid number"<< endl;


    return 0;
}
