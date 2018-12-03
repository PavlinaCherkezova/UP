#include <iostream>
#include <cctype>

using namespace std;
void different(char str[100]);
void lower (char str[100]);
void sortme (char str[100]);
char minimal (char str[100]);

int main()
{
    char sentence [100];
    different(sentence);
    sortme(sentence);

    return 0;
}
void different(char str[100])
{
    cin.getline(str, 100);
    lower(str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                str[i] = ' ';
            }
        }
    }

}
void sortme (char str[100])
{
    int counter =0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            str[i] = minimal(str + i);
            counter ++;
        }
    }
    cout<<str;
    cout<<counter;
}
void lower (char str[100])
{
  for(int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
}
char minimal (char str[100])
{
    char temp;
    for(int i = 0; str[i] != '\0' && str[i] != ' '; i++)
    {
        if(str[i] < str[i+1]) temp = str[i];
    }
    return temp;
}

