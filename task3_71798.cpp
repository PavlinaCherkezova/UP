#include <iostream>

using namespace std;
void fix(char str [100]);
int main()
{
    char sentence [100];
    fix(sentence);

    return 0;
}
void fix(char str [100])
{
    cin.getline(str, 100);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 65 && str[i]<=90) && (str[i + 1] >=65 && str[i + 1] <= 90))
           {
               str [i] += 32;
           }
    }
    cout<<str;
}
