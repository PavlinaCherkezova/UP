#include <iostream>

using namespace std;

int main()
{
    /*int num;
    cin>> num;

    if(num>=5 && num<=20)
    {
        switch(num)
        {
            case 5: case 7: case 9: case 11:  case 13:  case 15:  case 17: case 19: cout<<"odd"<<endl; break;
            case 6: case 8: case 10: case 12: case 14: case 16: case 18: case 20: cout<<"even"<<endl;break;
        }
    }
    else cout<<"nope";
        */
/*
        Да се напише програма, която въвежда от клавиатурата трицифрено число n.
        Програмата да проверява дали произведението от цифрите му е трицифрено число.
         Ако произведението от цифрите му е трицифрено число, да извежда YES и разликата от произведението и
         сбора на цифрите му, в противен случай NO и и произведението от цифрите му.
         Примерен вход: 369 Примерен изход: YES 144 Примерен вход: 123 Примерен изход: NO 6
*/
   /* int n, n1;
    cout<<"3 digit number: "; cin>> n;

    int ed, des, sto;
    if(n>= 100 && n<=999)
    {
        sto=n/100;
        des= (n/10)%10;
        ed= n%10;

        n1= sto*des*ed;

         if(n1>=100 && n1<= 999)
         {
             int razlika ;

             razlika= n1 - (sto+ed+des);
             cout<<"Yes  "<< razlika;
         }
         else cout<<"NO  "<< n1<<endl;


    }
*/
/*Да се състави програма, която ще изчисли сумата на 5, въведени от клавиатурата,
естествени числа от интервала [10 ..5555].

Пример: 1,2,3,4,5 Изход: 15*/
/*
int a;
int sum=0;

 for(int i=0; i<5; i++)
 {
     cout<<"enter number: "; cin>> a;
     if(a>=0 && a<=5555)
     {
           sum+= a;
     }

 }
cout<<"sum= "<< sum;
*/
/*TASK 03

Да се напише програма, която чете от клавиатурата n числа и извежда най-голямото отрицателно число.*/
/*
        int n, a;
        int maximum= INT_MIN;

        cin>>n;

        for (int i=0; i<n; i++)
        {
            cout<<"enter number: "; cin>> a;
            if(a<0 && a> maximum)
            {
               maximum= a;
            }

        }
        cout<<"max:"<< maximum;

*/
        Да се пресметне n! за дадено n.

        int n, fact=1;


            for (int i=1; i<n; i++)
        {

        }




    return 0;
}
