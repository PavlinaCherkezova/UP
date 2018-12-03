#include <iostream>
#include <string>

using namespace std;

int main()
{
    int k, sum = 0, rest = 0, length = 0, i = 0, temp;
    char task;
    string str;;

    cout<<"(+/-) k = "; cin>>k;
    cout<<"E / D : "; cin>> task;

    if(task == 'E' || task == 'D')
    {
        cout<<"Message(put '.' at the end): ";
        getline(cin,str,'.');

        length = (int)str.length() - 1;
        while (str[i] !='\0')
           {
                temp = (int)str[i];
                if(temp >= 65 && temp <= 90)
                    {
                        if(task == 'E')
                            {
                               sum = temp + k;
                               if(sum > 91)
                                {
                                    rest = sum - 90 - 1;
                                    sum = 65 + rest;
                                }
                                if(sum < 64) //-k
                                {
                                    rest = 65 - sum -1;
                                    sum = 90 - rest;
                                }
                             }
                         if(task == 'D')
                            {
                                   sum = temp - k;
                                   if(sum > 91) //-k
                                    {
                                        rest = sum - 90 - 1;
                                        sum = 65 + rest;
                                    }
                                    if(sum < 64)
                                    {
                                        rest = 65 - sum - 1;
                                        sum = 90 - rest;
                                    }
                            }

                    str[i] = (char)sum;

                    if(i == length) cout<<str;
                }

                i++;
           }
    }
     else cout<<"Not valid input(Only 'E' or 'D') "<<endl;

    return 0;
}
