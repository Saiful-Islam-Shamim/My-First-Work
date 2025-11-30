#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    int n;
    cout << "Enter input Number :";
    cin >> n;

    cout << "Enter The Numbers : ";
    int number[n];
    int i;
    for(int i=0; i < n; i++)
    {
        cin >> number[i];
    }

    int max = number[i];
    int min = number[i];

    for(i= 0;i <n; i++)
    {
        if(number[i]< max)
        {
            max = number[i];
        }else if(number[i]< min)
        {
            min = number[i];
        }
    }

    cout << "Maximum Number is : " << max<< endl;
    cout << "Minimum Number is : " << min << endl;

    getch();
}
