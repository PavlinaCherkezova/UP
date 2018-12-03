#include <iostream>

using namespace std;
int p_count (int maxp, int p, int wanted);
int main()
{
    int num_p, my_p, w_p;

    cout<<"Positions: "; cin>> num_p;
    cout<<"Your position: "; cin>> my_p;
    cout<<"Wanted position: "; cin>> w_p;

    cout<<p_count(num_p, my_p, w_p);


    return 0;
}
int p_count (int maxp, int pos, int wanted)
{
    if((maxp - wanted + pos) < (wanted - pos))
        return (maxp - wanted + pos);
    else
        return (wanted - pos);

}
