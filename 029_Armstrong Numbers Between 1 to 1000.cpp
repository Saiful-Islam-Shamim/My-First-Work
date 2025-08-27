#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int num, count=0, result=0, mul=1, cnt, rem;
    //cout << "Enter a number : ";
   // cin >> num;

   for(int num =1; num<=1000; num++){
    int x = num;
    while(x!=0)
    {
        x = x/10;
        count++;
    }
   cnt = count;
    x=num;
    while(x!=0)
    {
        rem = x%10;
        mul = 1;
        int tempcnt =cnt;
        while(tempcnt != 0)
        {
            mul=mul * rem;
            tempcnt--;
        }
        result = result + mul;
        x = x/10;

    }
    if(result == num){
        cout << result;
    }

    getch();
   }
}
