#include <iostream>
using namespace std;

int main(void)
{
    int a, b, gcd,
        big, small, reminder;
    cout << "½Ð¿é¤J (a, b) ¨D GCD"
         << endl << "a = ";
    cin >> a ;
    cout << "b = ";
    cin >> b;

    big = (a >= b)? a : b;
    small = (a == big)? b : a;

    while (big % small != 0){
        reminder = big % small;
        big = small;
        small = reminder;
    }

    gcd = small;
    cout << "(a ,b) = " << gcd;
}
