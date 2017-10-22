#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*Преминаването от Фаренхайт към Целзий се извършва като извадите 32,
     умножите по 5 и разделите на 9. За преминаване от Целзий към Келвини добавяте 273.15.
      Напишете програма, която по въведени градуси по Фаренхайт да изведе на екрана градусите ои Целзий и/или Келвини.
       Изборът на изход зависи от въведена команда (след като сте въвели числената стойност) c, k, a (за целзий, калвинии двете).

Пример: (примерните изходи са закръглени до втория знак)

Вход: 0 a Изход: Celsium: -17.78 Kelvin: 255.37

Вход: 40 c Изход: Celsium: 4.4

Вход: 56 k Изход: Kelvin: 286.48*/

    double cel, kel, fahr;
    int c, k, a, command;

    cout<<"Fahrenheit: "; cin>>fahr;
    cout<<"c/k/a: "; cin>>command;

    cel= (fahr-32)*5/9;
    kel= cel + 273.15;

    if(command = a)
    {
        cout<<"Celsium: "<<cel<<endl;
        cout<<"Kelvin: "<<kel<<endl;
    }
    else if (command = c)
        {
            cout<<"Celsium: "<<cel<<endl;
        }
            else if (command = k)
               {
                  cout<<"Kelvin: "<<kel<<endl;
               }



    return 0;
}
