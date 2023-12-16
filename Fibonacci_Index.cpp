#include <iostream>
using namespace std;
int main()
{
    cout << "\nThis is a basic program to Print Fibonacci number's Index.\n";
    cout << "This is also check the number you given, is a Fibonacci number or not.\n";
    cout << "\nThank You for Using My Program :)\n\n";
    int Num;
    cout << "Enter the number of inputs : ";
    cin >> Num;
    int Fibo[Num];
    for (int i = 0; i < Num; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> Fibo[i];
    }
    cout << endl;
    cout << "\t\tYour Result" << endl
         << endl;
    for (int i = 0; i < Num; i++)
    {

        int a = 0, b = 1, c = a + b;
        int index = 3;
        while (c < Fibo[i])
        {
            a = b;
            b = c;
            c = a + b;
            index++;
            if (Fibo[i] == c)
            {
                cout << "For " << Fibo[i] << " : ";
                cout << "Yes this is a Fibonacci number => ";
                cout << "Index : " << index << endl;
            }
        }

        if (c != Fibo[i])
        {

            cout << "For " << Fibo[i] << " : This is not a Fibonacci Number." << endl;
        }
    }
    cout << endl;
    return 0;
}